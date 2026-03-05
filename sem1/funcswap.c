#include<stdio.h>
void swap(int,int);
int main()
{
   int a=10,b=20;
   printf("before swapping two vaue in main a=%d,b%d\n",a,b);
   swap(a,b);
   printf("after swapping values in main a=%d,b%d\n",a,b);
}
void swap(int a,int b)
{
   int temp;
   temp=a;
   a=b;
   b=temp;
   printf("after swapping value in func a=%d,b=%d",a,b);
}


