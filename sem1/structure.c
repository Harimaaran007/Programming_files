#include<stdio.h>
struct college
{
   char state[20];
   int e,md,m,s;
};
int main()
{
   int i,n,j,max,temp,tc[206];
   struct college c[20];
   printf("enter the no.\t");
   scanf("%d",&n);
   printf("\nenter state & no of coll\t");
   for(i=0;i<n;i++)
   {
      scanf("%s",c[i].state);
      scanf("%d%d%d%d",&c[i].e,&c[i].m,&c[i].md,&c[i].s);
   }
   for(i=0;i<n;i++)
   {
      tc[i]=c[i].e+c[i].md+c[i].m+c[i].s;
      printf("%s has %d college",c[i].state,tc[i]);
   }
   for(i=0;i<n-1;i++)
   {
      for(j=i+1;j<n;j++)
      {
	 if(tc[i]>tc[j])
	 {
	    temp=tc[j];
	    tc[j]=tc[i];
	    tc[i]=temp;
	 }
	 max=tc[j];
      }
   }
   printf("\n max no of coll is %d is the state %s",max,c[i].state);
   return 0;
}
