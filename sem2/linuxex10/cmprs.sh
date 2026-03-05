echo "enter file"
read file
if [ -r $file ] && [ -w $file ] && [ -x $file ]
then
   echo "file has all permissions"
else
   echo "file doesnt have all permissions"
fi
