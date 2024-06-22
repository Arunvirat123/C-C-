find_avg(){
len=$#
sum=0
for i in "$@"
do
	sum=$(( sum + i ))
done
avg=$(( sum / len ))
return $avg
}

find_avg 10 20 30 40
printf "%f" "$?"
printf "\n"
