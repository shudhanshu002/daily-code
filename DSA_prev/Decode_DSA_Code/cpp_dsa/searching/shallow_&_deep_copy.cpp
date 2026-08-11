
#include <iostream>
using namespace std;

class Bike
{
public:
    static int noofbikes;
    int tyresize;
    int enginesize;

    //default constructor;
    Bike(int tyresize,int enginesize) {
        this->tyresize=tyresize;
        this->enginesize=enginesize;
        cout<<"Constructor call hua hai ji!\n";
    }

    static void increasenoofbikes(){
        noofbikes++;
    }
};
int Bike::noofbikes=23;

int main()
{
    cout<<"hi"<<"\n";
    Bike tvs(45,345);
    Bike honda(90,45);
    tvs.increasenoofbikes();
    cout<<tvs.noofbikes<<"\n";
    cout<<honda.noofbikes<<"\n";

    honda.increasenoofbikes();
    cout<<tvs.noofbikes<<"\n";
    cout<<honda.noofbikes<<"\n";

    Bike::increasenoofbikes();
    cout<<tvs.noofbikes<<"\n";
    cout<<honda.noofbikes<<"\n";
///static keyword in cpp defi
///it makes memory of the variable static once a static variable is declared its memeory can't be changed
//same for all objects
///belonga to class
/// classname::staticfun();how to call from class name to sattic variable
///  scope resolution read it;


}
