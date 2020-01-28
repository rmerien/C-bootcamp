cat /etc/passwd | sed '1,9d' | awk "NR%2" | cut -d : -f1 | rev | sort -r | sed -n "$FT_LINE1,  $FT_LINE2  p" | sed "s/$/, /g" | xargs | sed "s/,$/./" | tr -d "\r\n"
