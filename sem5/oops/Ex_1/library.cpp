#include<iostream>
using namespace std;
class station
{
   private:
      string title;
      int accessno;
      int price;
      int copies;
   public:
      station()
      {
	 title="";
	 accessno = 0;
	 price = 0;
	 copies = 0;
      }
      void addbook()
      {
	 cout<<"enter the title:"<<endl;
         cin>>title;
         cout<<"enter the accessno:"<<endl;
         cin>>accessno;
         cout<<"enter the price:"<<endl;
         cin>>price;
         cout<<"enter the copies:"<<endl;
         cin>>copies;
      }
      int pricedetails()
      {
	 return (price*copies);
      }
};
int main()
{
   station b1,b2;
   b1.addbook();
   b2.addbook();
   int c = b1.pricedetails();
   int d = b2.pricedetails();
   cout<<"totalworth:"<<(c+d)<<endl;
   return 0;
}



