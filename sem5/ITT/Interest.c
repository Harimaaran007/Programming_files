#include<stdio.h>
#include<math.h>
float SimpleInterest(float P,float R,int T){
   return ((P*R*T)/100);
}
float CompountInterest(float P,float R,int T,int n){
   R=R/100;
   float A = P * pow((1+R/n),n*T);
   return (A-P);
}
int main(){
   float P,R;
   int T,n;
   printf("Enter Principal,Rate,Time, Number: ");
   scanf("%f%f%d%d",&P,&R,&T,&n);
   printf("The Simple Interest: %f\n",SimpleInterest(P,R,T));
   printf("The compound Interest: %f\n",CompountInterest(P,R,T,n));
   return 0;
}
