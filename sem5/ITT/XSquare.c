#include <stdio.h>
#include <string.h>
void XSquare(char *Str){
   int i,j,n=strlen(Str);
   for(i=0;i<n;i++){
      for(j=0;j<n;j++){
	 if(j==i || j==n-i-1){
	    printf("%c",Str[j]);
	 }
	 else{
	    printf(" ");
	 }
      }
      printf("\n");
   }
}
int main()
{
   XSquare("1234567");
   return 0;
}
