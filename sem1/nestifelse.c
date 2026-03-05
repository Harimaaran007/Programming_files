#include<stdio.h>
int main()
{
   int a,b,c;
   printf("enter the three number:");
   scanf("%d%d%d",&a,&b,&c);
   if((a>b)&&(a>c))
   {
      printf("the biggest number is a");
   }
   if(b>c)
   {
      printf("the bigest number is b");
   }
   else
   {
      printf("the biggest number is c");
   }
   return 0;
}
