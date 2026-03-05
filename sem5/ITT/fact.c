#include<stdio.h>
int fact(n)
{
   if(n==0)
   {
      return 1;
   }
   else
   {
      return n*fact(n-1);
   }
}
int main()
{
   int n;
   printf("enter the value:");
   scanf("%d",&n);
   int f=fact(n);
   printf("the factoial value of %d is %d:",n,f);
}

