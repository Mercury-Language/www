<?php
$mo=1;
$yr=date("Y");

$current_month=date("m");
$current_year=date("Y");

$first_year=1997;

$cols=3;
$width=(int)(100/$cols);

$yrmo=sprintf("%04d%02d", $current_year, $current_month);
$dir="$list.$yrmo/index.html";

if (file_exists($dir))
{
    echo "<A HREF=\"$dir\">Current Month</A>";
}
else
{
    echo "Current Month (no mail messages)";
}

while ($yr >= $first_year)
{
    echo "<H3>$yr</H3>";
    echo "<TABLE width=\"100%\">";

    $i=1;

    while ($mo <= 12)
    {
        if ($yr == date("Y") && $mo > $current_month)
        {
            break;
        }

        $yrmo=sprintf("%04d%02d", $yr, $mo);
        $dir="$list.$yrmo/index.html";
	/* prior to Jan 2004, the file names use two-digit years */
        $yr_2digits=date("y", mktime(0,0,0,$mo,1,$yr));
        $yrmo_2digits=sprintf("%02d%02d", $yr_2digits, $mo);
        if (!file_exists($dir) && file_exists("$list.$yrmo_2digits/index.html")) {
	    $dir="$list.$yrmo_2digits/index.html";
	}
        $month_string=date("F", mktime(0,0,0,$mo,1,$yr));

        if ($i == 1)
        {
            echo "<TR>\n";
        }
        echo("\t<TD width=\"$width%\">");

        if (file_exists($dir))
        {
            echo "<A HREF=\"$dir\">";
        }
        echo "$month_string";

        if (file_exists($dir))
        {
            echo "</A>";
        }
        else
        {
            echo " (no mail messages)";
        }
        echo "</TD>\n";

        $mo++;
        $i++;

        if ($i > $cols)
        {
            echo "</TR>\n";
            $i = 1;
        }
    }
    echo "</TABLE>";

    $yr--;
    $mo=1;
}
?>
