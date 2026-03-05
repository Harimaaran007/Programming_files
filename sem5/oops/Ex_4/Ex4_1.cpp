#include<iostream>
using namespace std;
class Calc{
   float V;
   public:
   Calc(float Volt){
      V=Volt;
   }
   void Current(float R1){
      cout<<"current across "<<R1<<": "<<V/R1<<endl;
   }
   void Current(float R1,float R2){
      cout<<"current across "<<R1<<": "<<V/R1<<endl;
      cout<<"current across "<<R2<<": "<<V/R2<<endl;
   }
   void Current(float R1,float R2,float R3){
      cout<<"current across "<<R1<<": "<<V/R1<<endl;
      cout<<"current across "<<R2<<": "<<V/R2<<endl;
      cout<<"current across "<<R3<<": "<<V/R3<<endl;
   }
};
int main(){
   Calc P1(100);
   float R1,R2,R3;
   cout<<"Enter R1,R2,R3 values: ";
   cin>>R1>>R2>>R3;
   cout<<"For circuit with R1: "<<endl;
   P1.Current(R1);
   cout<<"For circuit with R1 and R2: "<<endl;
   P1.Current(R1,R2);
   cout<<"For circuit with R1 and R2 and R3: "<<endl;
   P1.Current(R1,R2,R3);
   return 0;
}
