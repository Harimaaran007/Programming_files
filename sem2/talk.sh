#!/bin/bash
echo "please talk to me..."
while :
do read INPUT_STRING
   case $INPUT_STRING in
      hello)
	 echo "hello yourself"
	 ;;
      bye)
	 echo "see you again!"
	 break
	 ;;
      *)
	 echo "sorry,i don't unterstand"
	 ;;
   esac
done
echo "that's all folk!"
