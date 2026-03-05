#include<iostream>
using namespace std;
class family
{
   protected:
      int a;
   public:
      virtual void geta()
      {
	 cout<<"enter the your name:"<<endl;
	 cin>>a;
      }
      void display()
      {
	 cout<<a;
      }
};
class 
