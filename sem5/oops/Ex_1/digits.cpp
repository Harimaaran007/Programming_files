#include<iostream>
using namespace std;
class integer
{
   int number,count;
   int *arr;
   public:
   {
      integer();
      void count;
      void memory;
      void display;
      ~integer();
   };
   void integer::integer()
   {
      cout<<"enter the integer:";
      cin>>number;
   }
   void integer::count()
   {
      count = 0;
      int temp = number;
      while(temp != 0)
      {
	 temp=temp/10;
	 count++;
      }
      cout<<"count: "<<count<<endl;
      arr=new int[count];
      cout<<"memory created:"<<endl;
   }
   void integer::memory()
   {
      int temp = number;
      for(int i=(count-1);i>=0;i--)
      {
	 integer[i]=number%10;
	 arr[i]=temp;
	 number=number/10;
      }
   }
   void integer::display()
   {
      for(int i=0;i<count;i++)
      {
	 cout<<arr[i]<<endl;
      }
   }
   integer::~integer()
   {
      delete[]arr;
      cout<<"memory loaded:";
   }
   int main()
   {
     integer d1;
      d1.count();
      d1.memory();
      d1.display();
      return 0;
   }
