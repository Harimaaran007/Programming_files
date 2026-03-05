#include<stdio.h>
int main()
{
   int Arr[10];
   int n,i;
   int *ptr=Arr;
   printf("enter the value in the array");
   scanf("%d",&n);
   printf("enter the array value:");
   for(i=0;i<n;i++)
   {
      scanf("%d",&ptr[i]);
   }
   for(i=0;i<n;i++)
   {
      if(ptr[i]%2==0)
      {
	 printf("\n%d",ptr[i]);
      }
   }
   return 0;
}
