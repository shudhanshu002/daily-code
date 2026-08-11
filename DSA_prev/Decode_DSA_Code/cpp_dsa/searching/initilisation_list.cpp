/*
class Student {
public:
int rollno.;
int class;
 Student (int r, int c) : rollno.(r),class(c){
 }
};
*/

#include <iostream>
using namespace std;

class Bike
{
public:
    int tyresize;
    int enginesize;

    //default constructor;
    Bike(int ts,int es):tyresize(ts),enginesize(es) {

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

