#include<iostream>
using namespace std;
class car
{
   private:
      string brand;
      string model;
      int price;
      int year;
   public:
      car()
      {
	 cout<<"car brand:"<<endl;
	 cin>>brand;
	 cout<<"car model:"<<endl;
	 cin>>model;
	 cout<<"car year:"<<endl;
	 cin>>year;
	 cout<<"car price:"<<endl;
	 cin>>price;
      }
      void cardetails()
      {
	 cout<<"car brand:"<<endl;
	 cout<<"car model:"<<endl;
	 cout<<"car year:"<<endl;
	 cout<<"car price:"<<endl;
      }
      ~car(){}
};
int main()
{
   car c1,c2;
   c1.cardetails();
   c2.cardetails();
   return 0;
}
