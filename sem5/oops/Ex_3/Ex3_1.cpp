#include<iostream>
using namespace std;
class Student{
   int Regno,CCode;
   public:
   Student(int R,int C){
      Regno=R;
      CCode=C;
   }
   Student(Student &p){
      CCode=p.CCode;
   }
   void Display(){
      cout<<"Register no: "<<Regno<<endl;
      cout<<"College code: "<<CCode<<endl;
   }
};
int main(){
   int Re,Co;
   cout<<"Enter Reg.no. and college code: ";
   cin>>Re>>Co;
   Student S(Re,Co);
   Student S1(S);
   Student S2=S;
   S.Display();
   S1.Display();
   S2.Display();
}
