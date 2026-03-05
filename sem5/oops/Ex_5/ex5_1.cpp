#include<iostream>
using namespace std;
class calculate
{
   public:
      int Feet,Inch;
      calculate()
      {
	 Feet=Inch=0;
      }
      void getdata()
	    {
	    cout<<"Enter feet:"<<endl;
	    cin>>Feet;
	    cout<<"Enter inch:"<<endl;
	    cin>>Inch;
	    }
       friend void add(calculate,calculate);
};
void add(calculate c1,calculate c2)
{
   int feet,inch;
   feet = c1.Feet+c2.Feet;
   inch = c1.Inch + c2.Inch;
   feet = feet + int(inch/12);
   if((inch/12)>=1)
      inch = inch%12;
   cout<<"After addition of two distance:"<<feet<<"'"<<inch<<"''"<<endl;
}
int main()
{
   calculate c1,c2;
   c1.getdata();
   c2.getdata();
   add(c1,c2);
   return 0;
}
                                                                                                                                                                                                                                    
