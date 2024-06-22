echo -n "Enter left end"
read le
echo -n "Enter right end"
read re

is_prime(){
if [ $1 -lt 2 ]
	then
	return
fi

ctr=0
for (( i=2;i<$1;i++ )){
	if [ $(( $1 % i )) -eq 0 ]
	then
		ctr=$(( ctr + 1 ))
	fi
}
if [ $ctr -eq 0 ]
then
	printf "%d " "$1"
fi
}

printf "Prime numbers between %d and %d are: " "$le" "$re"
for (( i=l;i<=re;i++ )){
	is_prime $i
}
printf  "\n"
