#include <iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
    void setData(int x,int y){
        a=x;
        b=y;
    }
    void showData(){
        cout<<"\na: "<<a<<" b:"<<b;
    }
    complex operator /(complex c){
        complex temp;
        temp.a=a/c.a;
        temp.b=b/c.b;
        return temp;
    }
};

int main()
{
    complex c1,c2,c3;
    c1.setData(3,4);
    c2.setData(12,12);
    c3=c2/c1;
    c3.showData();
}

