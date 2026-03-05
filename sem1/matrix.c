#include<stdio.h>
int main()
{
   int a[3][3],b[3][3],c[3][3],r1,r2,c1,c2,i,j,k;
   printf("enter the row and column of a");
   scanf("%d%d",&r1,&c1);
   printf("enter the row and column of B");
   scanf("%d%d",&r2,&c2);
   printf("enter the a matrix elements");
   for(i=0;i<r1;i++)
   {
      for(j=0;j<c1;j++)
      {
	 scanf("%d",&a[i][j]);
      }
   }
   printf("enter the B matrix element");
   for (i=0;i<r2;i++)
   {
      for(j=0;j<c2;j++)
      {
	 scanf("%d",&b[i][j]);
      }
   }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
	{
	   c[i][j]=0;
	   for(k=0;k<r1;k++)
	   {
	      c[i][j]=c[i][j]+a[i][k]*b[k][j];
	   }
	}
    }
    printf("the multi of A and B matrix:\n");
    for(i=0;i<r1;i++)
    {
       for(j=0;j<c1;j++)
       {
	  printf("%d\t",c[i][j]);
       }
       printf("\n");
    }
    return 0;
}
