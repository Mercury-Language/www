<?
$mo=1;
$yr=date("y");

$current_month=date("m");
$current_year=date("y");

$year=97;

$cols=3;
$width=(int)(100/$cols);

$yrmo=sprintf("%02d%02d", $current_year, $current_month);
$dir="$list.$yrmo/index.html";

if (file_exists($dir))
{
    echo "<A HREF=\"$dir\">Current Month</A>";
}
else
{
    echo "Current Month (no mail messages)";
}

while ($yr >= $year)
{
    $year_string=date("Y", mktime(0,0,0,$mo,1,$yr));
    echo "<H3>$year_string</H3>";
    echo "<TABLE width=\"100%\">";

    $i=1;

    while ($mo <= 12)
    {
        if ($yr == $current_year && $mo > $current_month)
        {
            break;
        }

        $yrmo=sprintf("%02d%02d", $yr, $mo);
        $month_string=date("F", mktime(0,0,0,$mo,1,$yr));

        if ($i == 1)
        {
            echo "<TR>\n";
        }
        echo("\t<TD width=\"$width%\">");

        $dir="$list.$yrmo/index.html";
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
