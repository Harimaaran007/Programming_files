#include<stdio.h>
int main()
{
   float i=2.0;
   float j=1.0;
   float sum=0.0;
   {
      while(i/j>0.001)
      {
	 j+=j;
	 sum=sum+(i/j);
	 printf("%f\n",sum);
      }
   }
}

