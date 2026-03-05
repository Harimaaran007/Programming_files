#include<stdio.h>
#include<stdlib.h>
int main(){
   int i;
   for(i=1000000000;i<=9999999999;i++){
      if((i%10)%2==0){
	 if((i%3)%2==0){
	    if(i%10==0){
	       printf("%d\n",i);
	    }
	 }
      }
   }
}
