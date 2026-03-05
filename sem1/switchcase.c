#include<stdio.h>
int main()
{
   char vowel,constant;
   printf("enter the word:");
   scanf("%c",&vowel);
   switch(vowel)
   {
      case'a':
	 printf("vowel");
	 break;
      case'e':
	 printf("vowel");
	 break;
      case'i':
	 printf("vowel");
	 break;
      case'o':
	 printf("vowel");
	 break;
      case'u':
	 printf("vowel");
	 break;
      default:
	 printf("the word is constant");
   }
   return 0;
}

