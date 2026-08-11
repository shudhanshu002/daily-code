#include <iostream>
using namespace std;

class Bike
{
public:
    int tyresize;
    int enginesize;

    //default constructor;
    Bike(int tyresize,int enginesize) {
        this->tyresize=tyresize;
        this->enginesize=enginesize;
        cout<<"Constructor call hua hai ji!\n";
    }

    //desturctor
    ~Bike(){
        cout<<"Distuctor call huaa!\n";
    }

};


int main()
{
    cout<<"hi"<<"\n";
    Bike tvs(45,345);
///cout<<Tvs.tyresize;
    Bike honda(90,45);
    cout<<tvs.tyresize;
    cout<<honda.tyresize;
    cout<<tvs.enginesize;
}
