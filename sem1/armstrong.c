#include <stdio.h>
int main()
{
   int n,r,arm,sum=0;
   printf("enter the number:");
   scanf("%d",&n);
   arm=n;
   while(n>0)
   {
      r=n%10;
      sum=sum+(r*r*r);
      n=n/10;
   }
   if(sum==arm)
      printf("the given number is an armstrong number");
   else
      printf("the given number is an  not armstrong number");
   return 0;
}
   
