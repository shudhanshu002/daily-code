/// friend function can be a part of more thanone classes at the same time;


#include <iostream>
using namespace std;
class B;
class A{
private:
    int a;
public:
    A(int x){
        a=x;
    }
    friend void fun(A,B);
};

class B{
private:
    int a;
public:
    B(int x){
        a=x;
    }
    friend void fun(A,B);
};

void fun(A o1,B o2)
{
    cout<<"Sum is : "<<o1.a+o2.a;
}

int main()
{
    A o1(90);
    B o2(45);
    fun(o1,o2);
}
