#include<stdio.h>
union employee
{
   char name[20];
   int empno,bp;
};
int main()
{
   int i,n;
   float ts;
   union employee c[60];
   printf("enter the no of employees");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      printf("\nenter the name\t");
      scanf("%s",&c[i].name);
      printf("\nenter the no\t");
      scanf("%d",&c[i].empno);
      printf("\nenter the pay\t");
      scanf("%d",&c[i].bp);
   }
   printf("employee details are");
   for(i=0;i<n;i++)
   {
      ts=c[i].bp+0.5*c[i].bp+0.05*c[i].bp;
      printf("\ntotal\t%f",ts);
   }
}
