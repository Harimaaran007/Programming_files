#include<stdio.h>
void main()
{
   FILE*fptr;
   char name[20];
   int age;
   float salary;
   fptr=fopen("emp.rec","w");
   if(fptr==NULL)
   {
      printf("file doesn't exixts\n");
   }
   printf("enter the name\n");
   scanf("%s",name);
   fprintf(fptr,"name=%s\n",name);
   printf("enter your age\n");
   scanf("%d",&age);
   fprintf(fptr,"age=%d\n",age);
   printf("enter the salary\n");
   scanf("%f",&salary);
   fprintf(fptr,"salary=%2.f\n",salary);
   fclose(fptr);
}

