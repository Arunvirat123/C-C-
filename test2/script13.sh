is_odd(){
x=$1
if [ $(( x % 2 )) == 0 ]
then
echo "Invalid output"
exit 1
else
echo "Number is odd"
fi
}

is_odd $1
