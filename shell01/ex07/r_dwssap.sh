cat /etc/passwd | sed 's/:.*// ; /\#.*/d' |
awk '{ if (NR>1) { if (NR % 2 == 0) print } else print }' |
rev | sort -r | sed -n "$FT_LINE1"','"$FT_LINE2"'p' |
tr '\n' ' ' | sed -e 's/ /, /g ; s/, $/./'
