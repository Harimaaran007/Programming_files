for file1 in *
do
   if [ -f "$file1" ]; then
      filesize=$(stat -c %s "$file1")
      if ((filesize > 10))
      then
	 echo "The filesize of $file1 is greater than 100"
      else
	 echo "$file1 has a size of $filesize bytes"
      fi
   fi
done							       
