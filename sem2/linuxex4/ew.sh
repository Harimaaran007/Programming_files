echo "enter the radius of circle:"
read radius
pi=3.14159
area=$(echo "$pi*($radius^2)"|bc)
circum=$(echo "(2*$pi*$radius)"|bc)
echo "area of a circle is:$area"
echo "circumference of a circle is:$circum"
