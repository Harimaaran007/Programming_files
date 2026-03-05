#include<iostream>
using namespace std;
class digit
{
   int Number,count;
   int *Arr;
   public:
   digit();
   void Count();
   void Convert();
   void Display();
   ~digit();
};
digit::digit()
{
   cout<<"Enter an integer: ";
   cin>>Number;
}
void digit::Count()
{
   count=0;
   int Temp=Number;
   while(Temp!=0)
   {
      Temp=Temp/10;
      count++;
   }
   cout<<"count: "<<count<<endl;
   Arr=new int[count];
   cout<<"Memory Created"<<endl;
}
void digit::Convert()
{
   int i,Temp=Number;
   for(i=count-1;i>=0;i--)
   {
      Temp=Number%10;
      Arr[i]=Temp;
      Number=Number/10;
   }
}
void digit::Display()
{
   int i;
   for(i=0;i<count;i++)
   {
      cout<<Arr[i]<<endl;
   }
}
digit::~digit()
{
   delete[] Arr;
   cout<<"Memory freed"<<endl;
}
int main()
{
   digit d1;
   d1.Count();
   d1.Convert();
   d1.Display();
   return 0;
}
