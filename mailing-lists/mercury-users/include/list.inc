<H2>Mercury Users Mailing List Archive</H2>

<TABLE width="100%">
<?
$mo=date("m");
$yr=date("y");

$year=97;
$month=01;

$cols=4;
$width=(int)(100/$cols);
$i=1;

while ($yr >= $year)
{
    while ($mo >= 1)
    {
        if ($yr == $year && $mo < $month)
        {
            break;
        }

        $yrmo=sprintf("%02d%02d", $yr, $mo);
        $month_string=date("M", mktime(0,0,0,$mo,1,$yr));

        if ($i == 1)
        {
            echo "<TR>\n";
        }
        echo("\t<TD width=\"$width%\">");

        $dir="mercury-users.$yrmo";
        if (file_exists($dir))
        {
            echo "<A HREF=\"$dir\">";
        }
        echo "$month_string $yr";

        if (file_exists($dir))
        {
            echo "</A>";
        }
        else
        {
            echo " (no mail messages)";
        }
        echo "</TD>\n";

        $mo--;
        $i++;

        if ($i > $cols)
        {
            echo "</TR>\n";
            $i = 1;
        }
    }
    $yr--;
    $mo=12;
}

if ($i != 1)
{
    echo "</TR>\n";
}
?>
</TABLE>
