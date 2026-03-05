#include<stdio.h>
int main()
{
   int a[10],n,i,j,o;
   int k,t;
   printf("enter limit");
   scanf("%d",&n);
   printf("enter elements of array");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   printf("enter option: 1 - searching number ; 2 - occurence of number");
   scanf("%d",&o);
   switch(o)
   {
      case 1:
	 printf("enter number to search");
	 scanf("%d",&k);
	 for(i=0;i<n;i++)
	 {
	    if(a[i]==k)
	    {
	       t=1;
	       break;
	    }
	 }
	 if(t==1)
	 {
	    printf("element is found");
	 }
	 else
	 {
	    printf("element is not found");
	 }
	 break;
      case 2:
	 printf("enter number");
	 scanf("%d",&k);
	 for(i=0;i<n;i++)
	 {
	    if(a[i]==k)
	    {
	       t+=1;
	    }
	 }
	 printf("occurence of %d is %d",k,t);
	 break;
      default:
	 printf("enter valid number");
	 break;
   }
   return 0;
}
