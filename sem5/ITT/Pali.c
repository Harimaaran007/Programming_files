#include<stdio.h>
int rev(int a){
   int R=0;
   while(a>0){
      R=R*10+(a%10);
      a/=10;
   }
   return R;
}    
int IsPalindrome(int a){
   int R=0;
   int Temp=a;
   while(a>0){
      R=R*10+(a%10);
      a/=10;
   }
   if(Temp==R){ return 1; }
   else { return 0; }
}
int main(){
   int Num,i;
   printf("Enter Number: ");
   scanf("%d",&Num);
   if(IsPalindrome(Num)==1){ printf("Result: %d at iteration 0\n",Num); }
   else{
      for(i=1;i<=5;i++){
	 Num=Num+rev(Num);
	 if(IsPalindrome(Num)==1){
	    printf("Palindrome %d at iteration %d\n",Num,i);
	    break;
	 }
	 else{ printf("Not Palindrome at iteration %d\n",i); }
      }
   }
}
