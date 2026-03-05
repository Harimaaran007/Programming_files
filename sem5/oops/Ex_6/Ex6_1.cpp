#include<iostream>
using namespace std;
class Time{
   int Hr,Min,Sec;
   public:
   Time(int h,int m,int s){
	   Hr=h;
	   Min=m;
	   Sec=s;
	   Min+=Sec/60;
	   Sec=Sec%60;
	   Hr+=Min/60;
	   Min=Min%60;
   }
   Time operator++(){
	   Time temp(0,0,0);
	   temp.Hr=++Hr;
	   temp.Min=++Min;
	   temp.Sec=++Sec;
	   return temp;
   }
   Time operator++(int){
	   Time temp(0,0,0);
	   temp.Hr=Hr++;
	   temp.Min=Min++;
	   temp.Sec=Sec++;
	   return temp;
   }
   Time operator--(){
	   Time temp(0,0,0);
	   temp.Hr=--Hr;
	   temp.Min=--Min;
	   temp.Sec=--Sec;
	   return temp;
   }
   Time operator--(int){
	   Time temp(0,0,0);
	   temp.Hr=Hr--;
	   temp.Min=Min--;
	   temp.Sec=Sec--;
	   return temp;
   }
   void Display(){
	   cout<<Hr<<":"<<Min<<":"<<Sec<<endl;
   }
};
int main(){
	Time T1(12,61,61);
	cout<<"Original Time: "<<endl;
	T1.Display();
	cout<<"Pre Increment: "<<endl;
	Time T2=++T1;
	T1.Display();
	T2.Display();
	cout<<"Pre Decrement: "<<endl;
	Time T3=--T1;
	T1.Display();
	T3.Display();
	cout<<"Post Increment: "<<endl;
	Time T4=T1++;
	T1.Display();
	T4.Display();
	cout<<"Post Decrement: "<<endl;
	Time T5=T1--;
	T1.Display();
	T5.Display();
	return 0;
}
