#!/bin/sh
# 
# Create one hypermail archive for the month and mailing list specified.
# This command must be run in the directory this script is located in.
#
usage="archive2html.sh -y <year> -m <month> -f <filename> -d <directory>"


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

hypermail -c ../hypermail.config -x -m $filename -a "../../mailing-lists.html" -l "$file $month $year"
