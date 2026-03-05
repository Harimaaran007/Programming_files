#include<iostream>
using namespace std;
class DC_Motor
{
   float emf,ra;
   public:
   DC_Motor()
   {
      cout<<"enter the emf value:"<<endl;
      cin>>emf;
      cout<<"enter the armature value:"<<endl;
      cin>>ra;
   }
};
class shunt_Motor:public DC_Motor
{
   public:
      shunt_Motor(float E,float R)
      {
	 float I,emf,ra,V;
	 E=emf;
	 R=ra
	 I=(E/R);
	 V=E-(I*R);
      }
      void display()
      {
	 cout<<"The voltage value of the shunt motor is:"<<V<<endl;
	 cout<<"The current value of the stunt motor is:"<<I<<endl;
      }
};
class series_motor:public DC_Motor
{
   public:
      series_Motor(float E,float R)
      {
	 float res,emf,ra,;
	 E=emf;
	 R=ra;
	 cout<<"enter the series resistance value:"<<endl;
	 cin>>res;
	 I=emf/ra;





	 


