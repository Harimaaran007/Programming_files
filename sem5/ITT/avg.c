#include<stdio.h>
#include<stdlib.h>
int main()
{
   int *ptr,temp=0,i,n;
   printf("enter the elements in the array:");
   scanf("%d",&n);
   ptr=(int*)malloc(n*sizeof(int));
   printf("enter the element:");
   for(i=0;i<n;i++)
   {
      scanf("%d",&ptr[i]);
   }
   for(i=0;i<n;i++)
   {
      temp+=ptr[i];
   }
   printf("The average value is %d ",temp/n);
   return 0;
}


