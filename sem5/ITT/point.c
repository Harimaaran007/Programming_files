#include<stdio.h>
int main()
{
   int *ptr,i,N=5;
   int Arr[N];
   ptr=Arr;
   printf("enter the array value:");
   for(i=0;i<N;i++)
   {
      scanf("%d",&Arr[i]);
   }
   printf("the array values are:");
   for(i=0;i<N;i++)
   {
      printf("%d\n",ptr[i]);
   }
   return 0;
}


