#include<iostream>
#include<cstring>
using namespace std;
class String
{
   char *St;
   public:
   String();
   String(const char*);
   String(const char*,const char*);
   void FindVowels(String);
   void Display();
   ~String();
};
String::String(){
   St=new char[1];
   St[0]='\0';
}
String::String(const char *st1){
   St=new char[strlen(st1)+1];
   strcpy(St,st1);
}
String::String(const char *st1,const char *st2){
   St=new char[strlen(st1)+strlen(st2)+1];
   strcpy(St,st1);
   strcat(St,st2);
}
void String::FindVowels(String StrObj){
   char *Arr,Temp;
   int count=0,i,j=0;
   for(i=0;i<StrObj.St[i]!='\0';i++){
      Temp=tolower(StrObj.St[i]);
      if(Temp=='a' || Temp=='e' || Temp=='i' || Temp=='o' || Temp=='u'){
	 count++;
      }
   }
   Arr=new char[count+1];
   for(i=0;StrObj.St[i]!=0;i++){
      Temp=tolower(StrObj.St[i]);
      if(Temp=='a' || Temp=='e' || Temp=='i' || Temp=='o' || Temp=='u'){
	 Arr[j]=Temp;
	 j++;
      }
   }
   Arr[j]='\0';
   cout<<"Vowels for "<<StrObj.St<<" : "<<endl;
   for(i=0;i<=count;i++){
      cout<<Arr[i]<<endl;
   }
   delete[] Arr;
}
String::~String(){
   delete[] St;
}
void String::Display(){
   cout<<St<<endl;
}
int main(){
   String S1;
   String S2("objectorientedlanguage");
   String S3("computer","science");
   S1.Display();
   S2.Display();
   S3.Display();
   S3.FindVowels(S2);
   return 0;
}
