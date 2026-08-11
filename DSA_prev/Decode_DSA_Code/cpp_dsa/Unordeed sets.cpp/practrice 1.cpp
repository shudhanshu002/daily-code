
#include <iostream>
using namespace std;

class Z {
public:
    Z() {
    cout<<"Constructer is called"<<endl;
    }

    void manageObject() {}
    ~Z() {
    cout<<"Destructor is called"<<endl;
    }
};

int main()
{
    int n;
    cin>>n;
    Z* obj = new Z[n];
    delete []obj;
    return 90;
}
