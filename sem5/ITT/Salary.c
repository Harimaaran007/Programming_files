#include<stdio.h>
float cal(float Basic){
   printf("hra: %.2f\n",(0.2*Basic));
   printf("DA: %.2f\n",(0.8*Basic));
   float Gross=Basic+(0.2*Basic)+(0.8*Basic);
   printf("Gross: %.2f\n",Gross);
   float Deduction=0.12*((0.8*Basic)+(Basic))+(0.25*Basic);
   printf("Deduction: %.2f\n",Deduction);
   return (Gross-Deduction);
}
int main(){
   int ID;
   int Basic;
   printf("Enter ID: ");
   scanf("%d",&ID);
   printf("Enter Basic Salary: ");
   scanf("%d",&Basic);
   printf("Employee ID: %d\n",ID);
   float Net=cal(Basic);
   printf("Net Salary: %.2f\n",Net);
}
