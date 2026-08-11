#include <iostream>
using namespace std;
class A
{
public:
    void f1(){cout<<"class A";}
};

class B:public A
{
public:
    void f1() {cout<<"class B";} //function overriding

};


int main()
{
    A *p,o1;
    B o2;
    p=&o2;
    o2.f1();  //control to B
    p->f1();  //control yo b;
}
