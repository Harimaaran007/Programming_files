echo " menu " 
echo "1.lower to upper"
echo "2.upper to lower"
echo "3.quit"
echo "enter your choice: \c"
read choice
case "$choice" in
   1)echo "enter file: \c"
      read f1
      if [ -f$f1 ]
      then
	 echo 'converting lower case to upper case'
	 tr '[a-z]' '[A-Z]'  <  $f1
      else
	 echo  "$f1 does not exist"
      fi
      ;;
   2) echo "enter tthe file: \c"
      read f1
      if [ -f$f1 ]
      then
	 echo 'converting upper case to lower case'
	 tr '[ A-Z ]''[ a-z ]'  <  $f1
      else
	 echo "$f1 file does not exist"
      fi
      ;;
   3)
      echo "exit...."
      exit;;
esac
