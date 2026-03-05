#include<stdio.h>
void numtoroman(int a)
{
   int i;
   char *roman[]= { "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X", "XI","XII", "L", "C", "D", "M"};
   int num[]= { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 50, 100, 500, 1000 };
   for(i=0;i<=17;i++)
   {
      if(a==num[i])
      {
	 printf("%s",roman[i]);
      }
   }
}
int main()
{
   int value;
   printf("enter the value:");
   scanf("%d",&value);
   numtoroman(value);
   return 0;
}

