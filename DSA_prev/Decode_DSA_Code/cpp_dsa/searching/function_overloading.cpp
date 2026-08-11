
#include <iostream>
using namespace std;

class vehical//Base class, Parent class
{
public:
    int tyresize;
    int enginesize;
    int light;
    string companyname;

    vehical()
    {
        cout<<"vehical ka constucture call hua";
    }
};


class car : public vehical
{
public:
    int steeringsize;
};

class bike : public vehical {

    public:
    int handlesize;
    bike(){
    cout<<"Bike ka bhui call huaa";
    }
};

class A
{
private://private can't be accessed can't be inherited
    int_a_ka_private;
protected://private can't be accessed can be inherited
    int_a_ka_protected;
public://private can be accessed can be inherited
    int_a_ka_public;

};

class B : public A
{
public:
    int b_ka_public;
};

int main()
{
    bike honda;
    honda.handlesize=5;
    honda.tyresize=10;
    honda.enginesize=345;
    cout<<honda.handlesize;

}
