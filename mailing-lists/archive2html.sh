#!/bin/sh
# 
# Create one hypermail archive for the month and mailing list specified.
# This command must be run in the directory this script is located in.
#
usage="archive2html.sh -y <year> -m <month> -f <filename> -d <directory>"

    # Shows the messages inside <pre> </pre> tags so we don't lose
    # formatting.
export HM_SHOWHTML=0

    # How many thread levels all the replies should be indented.
export HM_THRDLEVELS=10

    # Header/Footer files for the index pages
    # Well at least the man page says that it should be the file,
    # but for some reason it must be the contents of the file.
export HM_IHTMLHEADERFILE="`cat msglist_header.inc`"
export HM_IHTMLFOOTERFILE="`cat msglist_footer.inc`"

    # Header/Footer files for the message pages
export HM_MHTMLHEADERFILE="`cat msg_header.inc`"
export HM_MHTMLFOOTERFILE="`cat msg_footer.inc`"

while getopts ad:f:m:uy: flag ; do
    case $flag in
        a)  archive=true ;;
        d)  dir=$OPTARG ;;
        f)  file=$OPTARG ;;
        m)  month=$OPTARG ;;
        u)  update=true ;;
        y)  year=$OPTARG ;;
        \?) echo "$usage"; exit 1 ;;
    esac
done

filename=$dir/$file.$year$month
if [ ! -f $filename ]
then
    echo "archive2html: $filename not found"
    exit 1
fi

if [ ! -d $file ]
then
    mkdir $file
fi
cd $file

case $month in
    01) month="Jan" ;;
    02) month="Feb" ;;
    03) month="Mar" ;;
    04) month="Apr" ;;
    05) month="May" ;;
    06) month="Jun" ;;
    07) month="Jul" ;;
    08) month="Aug" ;;
    09) month="Sep" ;;
    10) month="Oct" ;;
    11) month="Nov" ;;
    12) month="Dec" ;;
    \*) echo "archive2html: incorrect month"; exit 1 ;;
esac

set -x

hypermail -x -m $filename -a "../../mailing-lists.html" -l "$file $month $year"
