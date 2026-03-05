#include <stdio.h>
#include<stdlib.h>
void main()
{
   FILE*fptr;
   char filename[100];
   char ch;
   printf("enter the filename to be opened\n");
   scanf("%s",filename);
   fptr=fopen("emp.rec","r");
   if(fptr==NULL)
   {
      printf("cannot open file\n");
   }
   ch=fgetc(fptr);
   while(ch!=EOF)
   {
      printf("%c",ch);
      ch=fgetc(fptr);
   }
   fclose(fptr);
}
