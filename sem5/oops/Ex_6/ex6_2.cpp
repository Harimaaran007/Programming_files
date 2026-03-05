#include <iostream>

using namespace std;

class str
{
   string data,ans;

   public:
   str(string s)
   {
      data = s;
   }

   void operator-(char c)
   {
      ans="";
      for (int i=0; data[i]!='\0';i++)
      {
	 if(data[i]!=c)
	 {
	  ans+=data[i];
	 }
      }
   }
   void display()
   {
	 cout<<"Original String:"<<data<<endl;
	 cout<<"After subtracting the character:"<<ans<<endl;
   }
};

int main()
{
   char ch;
   str s("harihara kumaran");
   cout<<"Enter a character to remove:"<<endl;
   cin>>ch;
   s-ch;
   s.display();
   return 0;
}

	 



