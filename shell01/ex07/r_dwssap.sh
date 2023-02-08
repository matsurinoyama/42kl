cat /etc/passwd | sed 's/:.*//' | rev | sort -r | sed "$FT_LINE1"','"$FT_LINE2"'!d' |
awk '{ if (NR>1) { { NR % 2 == 0 } print } else print }' |
tr '\n' ' ' | sed -e 's/ /, /g' -e 's/, $/./'
