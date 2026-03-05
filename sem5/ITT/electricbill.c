#include<stdio.h>
int main()
{
   int a;
   printf("enter the electricity concemption:");
   scanf("%d",&a);
   if(a>=400)
   {
     a=a-400;
     printf("your electricity bill is %d",(a*10)+1600);
   }
   else if(a>=101&&a<=200)
   {
      a=a-100;
      printf("your electricity bill is %d",a*3);
   }
   else if(a>=201&&a<=300)
   {
      a=a-200;
      printf("your electricity bill is %d",(a*5)+300);
   }
   else if(a>=301&&a<=400)
   {
      a=a-300;
      printf("your electricity bill is %d",(a*8)+800);
   }
   else
   {
      printf("your electricity bill is free");
   }
}
