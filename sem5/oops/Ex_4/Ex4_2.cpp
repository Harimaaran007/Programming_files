#include<iostream>
using namespace std;
class emf
{
   public:
      void motor(int a=220,int rsh=75)
      {
	 float ra=1.2;
	 float il=4;
	 float ish=(a/rsh);
	 float ia=il-ish;
	 float Eb=a-(ia*ra);
	 cout<<"the Eb for shunt motor is:"<<Eb<<endl;
      }
      void motor(float ra,int a,int rse)
      {
	 int rsh=75;
	 float ia=3;
	 float Eb=a-(ia*(ra+rse));
	 cout<<"the Eb for series motor is:"<<Eb<<endl;
      }
      void motor(int a,float ra,int rse,int rsh)
      {
	 float il=4;
	 float ish=(a/rsh);
	 float ia=(il-ish);
	 float Eb=a-(ia*(ra+rse));
	 cout<<"the Eb for compound shunt motor is:"<<Eb<<endl;
      }
};
int main()
{
   emf e1;
   e1.motor();
   e1.motor(1.5,220,10);
   e1.motor(220,1.5,10,55);
   return 0;
}
