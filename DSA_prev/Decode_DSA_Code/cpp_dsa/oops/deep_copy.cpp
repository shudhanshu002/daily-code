
#include <iostream>
using namespace std;

class Deep
{
public:
    int *data;
    Deep(int value)
    {
        data=new int(value);
    }

    //deep copy constuctor
    Deep(const Deep& other)
    {
        data =new int(*other.data);
    }

    ~Deep()
    {

        delete data;
    }

    void display()
    {
        cout<<"VAlue: "<<*data<<endl;
    }
};

int main()
{
    Deep obj1(485);
    Deep obj2=obj1 ;//deep copy
    obj1.display();
    obj2.display();
}
