#include<stdio.h>
int main()
{
   int mark;
   printf("enter your mark:");
   scanf("%d",&mark);
   if((mark>=90)&&(mark<=100))
   {
      printf("grade O");
   }
   else if((mark>=80)&&(mark<90))
   {
      printf("grade A+");
   }
   else if((mark>=70)&&(mark<80))
   {
      printf("grade A");
   }
   else if((mark>=60)&&(mark<70))
   {
      printf("grade B+");
   }
   else if((mark>=50)&&(mark<60))
   {
      printf("grade B");
   }
   else
   {
      printf("grade F");
   }
   return 0;
}

