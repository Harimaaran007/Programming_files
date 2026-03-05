#!/bin/bash
echo -n "enter the name of a coutry:"
read country
echo -n "enter the offical language of country is "
case $country in
   lithumia)
      echo -n "lithumian"
      ;;
   romania)
      echo -n "romanian"
      ;;
   italy)
      echo -n "italian"
      ;;
   *)
      echo -n "unkown"
      ;;
esac

