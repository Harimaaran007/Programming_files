#include<stdio.h>
int main()
{
   int f,n;
   printf("enter the number for finding factorial");
   scanf("%d",&n);
   f=fact(n);
   printf("\n factoial of %d is %d",n,f);
}
int fact(int n)
{
   int temp;
   if(n==0)
      return 1;
   else
      temp=n*fact(n-1);
   return temp;
}
