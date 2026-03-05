# include<stdio.h>
float main()
{
   float principle,rate,time,s,a;
   printf("enter the priciple value:");
   scanf("%f",&principle);
   printf("enter the rate value:");
   scanf("%f",&rate);
   printf("enter the time:");
   scanf("%f",&time);
   s=principle*rate*time/100;
   
   printf("%f",s);
   
   return 0;
}
