#include<stdio.h>
#include<string.h>
int main()
{
   char initial[50];
   char des[50];
   int count=0,i;
   printf("enter the string value:");
   scanf("%s",initial);
   strcpy(des,initial);
   printf("copied string is %s",des);
   for(i=0;i<strlen(initial);i++){
      if(des[i] =='a' || des[i] =='e' || des[i] == 'i' || des[i] == 'o' || des[i] =='u')
      {
	 count++;
      }
   }
   printf("\nvowels in the string %d",count);
   return 0;
}
