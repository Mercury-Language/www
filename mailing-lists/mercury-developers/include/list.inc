<H2>Mercury Developers Mailing List Archive</H2>

<TABLE width="100%">
<?
$mo=date("m");
$yr=date("y");

$year=97;
$month=02;

$cols=3;
$i=1;
$width=(int)(100/$cols);

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

        $dir="mercury-developers.$yrmo";
        if ($i == 1)
        {
            echo "<TR>\n";
        }

        echo("<TD width=\"$width\"%>");
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
