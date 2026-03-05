#include<iostream>
using namespace std;
class Temp2;
class Temp1{
    int value1;
    friend class Temp2;
    public:
    void GetData(){
        cout<<"Enter number: ";
        cin>>value1;
    }
};
class Temp2{
    int value2;
    public:
    void GetData(){
        cout<<"Enter number: ";
        cin>>value2;
    }
    void Avg(Temp1 temp1){
        cout<<"Average: "<<(value2+temp1.value1)/2<<endl;
    }
    void Max(Temp1 temp1){
        if(value2>temp1.value1) cout<<"Max: "<<value2<<endl;
        else cout<<"Max: "<<temp1.value1<<endl;
    }
};
int main(){
    Temp1 T1;
    T1.GetData();
    Temp2 T2;
    T2.GetData();
    T2.Max(T1);
    T2.Avg(T1);
    return 0;
}
