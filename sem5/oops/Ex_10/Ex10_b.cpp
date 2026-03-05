#include <iostream>
using namespace std;

class Avg {
    int sum,count;
public:
    void add(int n) {
        if (n < 0) 
	   string a ="NEGATIVE VALUE";
	throw a;
        sum += n;
        count++;
        cout << "Added: " << n << endl;
    }
    
    float getAvg() {
        if (count == 0) 
	   string b="DIVIDE_BY_ZERO";
	throw b;
	float avg=sum/count;
        return avg;
    }
};

int main() {
    Avg a;
    try {
        cout << "\n 1.Average: " << a.getAvg() << endl;
    } catch (string e) {
        cout << "\n Error: " << e << endl;
    }
    try {
        a.add(10);
        a.add(-5);
        a.add(20);
    } catch (string e) {
        cout << "\n 2.Error: " << e << endl;
    }
    try {
        throw "hari";
    } catch (...) {
        cout << "\n 3.Default exception caught!" << endl;
    }
    try {
        try {
            a.add(-10);
        } catch (string e) {
            cout << "\n executed before the rethrow:" << e << endl;
            throw;
        }
    } catch (string e) {
        cout << "\n executed after the rethrow:" << e << endl;
    }
    
    return 0;
}
    
