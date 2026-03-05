#include<stdio.h>
int main()
{
   int i,j,n,a;
   printf("enter the n value:");
   scanf("%d",&n);
   a=n*2;
   for(i=0;i<2*n-1;i++)
   {
      for(j=0;j<2*n-1;j++)
      {
	 if(i==j||i+j==2*n-1)
	 {
	    printf("%d",i);
	 }
	 else
	 {
	    printf(" ");
	 }
	 printf("\n");
      }
   }
   return 0;
}
