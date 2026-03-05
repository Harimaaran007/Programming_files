#include<stdio.h>
int main()
{
   int i,j,n;
   printf("enter the n value:");
   scanf("%d",&n);
   for(i=0;i<n;i++){
      for(j=n;j>i;j--){
	 printf(" ");
      }
      for(j=i;j>0;j--){
	 printf("%d",n-j);
      }
      printf("0");
      for(j=1;j<=i;j++){
	 printf("%d",n-j);
      }
      printf("\n");
   }
}

