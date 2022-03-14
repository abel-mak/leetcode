
if [[ -f file.txt && $(wc -l < file.txt) -ge 10 ]]
    then head -n 10 file.txt | tail -1
else
    echo ""
fi
