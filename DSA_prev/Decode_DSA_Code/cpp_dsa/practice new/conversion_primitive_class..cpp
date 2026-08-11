#include <iostream>
using namespace std;

 class Complex
 {
 private:
    int a,b;
 public:
     Complex() {}
     Complex(int k) {
     a=k;
     b=0;
     }
    void setData(int x,int y)
    {
        a=x;b=y;
    }
    void showData() {
        cout<<endl<<"a: "<<a<<"  b:"<<b;
    }
 };

int main()
 {
     Complex x;
     int x1=5;
     x=x1;
     x.showData();
 }
