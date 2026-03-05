#include<stdio.h>
int main()
{
   int a,b,c,d,e,f,g;
   printf("enter the two values:");
   scanf("%d%d",&a,&b);
   c=a+b;
   d=a-b;
   e=a*b;
   f=a/b;
   g=a%b;
   printf("\n ,the add is: %d",c);
   printf("\n,the sub is: %d",d);
   printf("\n,the multi is: %d",e);
   printf("\n,the div is: %d",f);
   printf("\n,the rem is:%d",g);
   return 0;
}

