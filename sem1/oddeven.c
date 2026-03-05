#include<stdio.h>
int main()
{
   int num;
   printf("enter the number:");
   scanf("%d",&num);
   if(num%2==0)
   {
      printf("it's even");
   }
   else
   {
      printf("it's odd");
   }
   return 0;
}
