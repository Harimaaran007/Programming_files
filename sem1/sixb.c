#include<stdio.h>
#include<string.h>
int main()
{
   int l,choice;
   char a[50],b[50];
   printf("enter the string:");
   scanf("%s",a);
   printf("enter the choice:");
   scanf("%d",&choice);
   switch(choice)
   {
      case 1:
	 l=strlen(a);
	 printf("length of string is %d",l);
	 break;
      case 2:
	 strcpy(b,a);
	 printf("original string is %s",a);
	 printf("copied string is %s",b);
	 break;
      case 3:
	 printf("enter the another string:");
	 scanf("%s",b);
	 strcat(a,b);
	 printf("concatinated string is %s",a);
	 break;
      case 4:
	  printf("enter the another string:");
	  scanf("%s",b);
	  if(strcmp(a,b)==0)
	     printf("strings are equal");
	  else
	     printf("strings are not equal");
	  break;
      default:
	  printf("enter the valid chioce");
	  break;
   }
   return 0;
}
	   


