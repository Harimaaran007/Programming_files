#include<iostream>
using namespace std;
class stack
{
   private:
      int arr[3],top,n;
   public:
      stack()
      {
	 top=-1;
	 n=3;
      }
      void push(int value)
      {
	 if(top>=n-1)
	 {
	    throw "stack overflow error:stack is full!";
	 }
	 arr[++top]=value;
	 cout<<"push element is:"<<value<<endl;
      }
      void pop()
      {
	 if (top<0)
	 {
	    throw "stack underflow error: stack is empty!";
	 }
	 int value=arr[top--];
	 cout<<"popped element:"<<value<<endl;
      }
      int peek()
      {
	 if(top<0)
	 {
	    throw "empty stack error:stack is empty!";
	 }
	 int R=arr[top];
	 return R;
      }
      void display()
      {
	 cout<<"stack:";
	 if(top==-1)
	 {
	    cout<<"[empty]"<<endl;
	 }
	 else
	 {
	    for(int i=0;i<=n-1;i++)
	    {
	       cout<<arr[i]<<" "<<endl;
	    }
	 }
      }
};
int main() {
   stack s;
   cout<<"\n 1.Testing of overflow:"<<endl;
   try {
      s.push(10);
      s.push(20); 
      s.push(30);
      s.push(40);
   } catch(const char*error) {
      cout<<"caught:"<<error<<endl;
   }
   s.display();
   cout<<"\n 2.Testing of underflow:"<<endl;
   try {
      s.pop();
      s.pop(); 
      s.pop(); 
      s.pop();
   } catch(const char*error) {
      cout<<"caught:"<<error<<endl;
   }
   s.display();
   cout<<"\n 3.Testing of emptystack:"<<endl;
   try {
      int top=s.peek();
      cout<<"top element:"<<top<<endl;
   } catch(const char*error) {
      cout<<"caught:"<<error<<endl;
   }
   cout<<"\n 4.Testing of Rethrow:"<<endl;
   try {
      try {
	 s.push(100); 
	 s.push(50); 
	 s.push(80); 
	 s.push(120);
      } catch(const char* error) {
	 cout<<"before rethrow"<<endl;
	 throw;}
   } catch(const char*error) {
	 cout<<"After erthrow"<<endl;
      }
   return 0;
}
