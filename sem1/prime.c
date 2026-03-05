#include<stdio.h>
int main()
{
   int n,i,flag=0;
   printf("enter any number:");
   scanf("%d",&n);
   for(i=2;i<=n;i++)
   {
      if(n%i==0)
      {
	 flag++;
      }
   }
   if(flag==1)
      printf("%d is a prime number",n);
   else
      printf("%d is not a prime number",n);
   return 0;
}

