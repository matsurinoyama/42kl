cat /etc/passwd | sed 's/:.*// ; /\#.*/d' |
awk 'NR % 2 == 0' | rev | sort -r |
sed -n "$FT_LINE1"','"$FT_LINE2"'p' |
tr '\n' ' ' | sed -e 's/ /, /g ; s/, $/./' |
tr -d '\n'
