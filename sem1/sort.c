#include<stdio.h>
int main()
{
   int i,j,n,a[10],temp;
   printf("enter the no of element to be sorted");
   scanf("%d",&n);
   printf("enter the elements one by one");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   for(i=0;i<n-1;i++)
   {
      for(j=i+1;j<n;j++)
      {
	 if(a[i]>a[j])
	 {
	    temp=a[i];
	    a[i]=a[j];
            a[j]=temp;
	 }
      }
   }
   printf("the sorted numbers are\t");
   for(i=0;i<n;i++)
   {
      printf("%d\t",a[i]);
   }
}

