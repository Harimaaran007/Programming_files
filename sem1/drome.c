#include<stdio.h>
int main()
{
   int n,r,rev=0,orginal;
   printf("enter the number");
   scanf("%d",&n);
   orginal=n;
   while(n>0)
   {
      r=n%10;
      rev=rev*10+r;
      n=n/10;
   }
   if(orginal==rev)
      printf("the given number is palindrome");
   else
      printf("not palindrome");
   return 0;
}

