#include <iostream>
using namespace std;

class shallow
{
public:
    int *data;
    shallow(int value){
        data=new int (value);
    }

    //shallow constructor copy
    shallow(const shallow& other)
    {
        data=other.data;
    }
    ~shallow(){
        delete data;
    }

    void display() {
        cout<<"Value: "<<*data<<endl;
    }
};


int main()
{
    shallow obj1(4223);
    shallow obj2=obj1;  //shallow copy
    obj1.display();
    obj2.display();
}
