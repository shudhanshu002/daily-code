///Adding two complex number in cpp



#include <iostream>
#include <vector>
using namespace std;
class complex
{
private:
    int a,b;
public:
    void set_data(int x,int y)
    {
        a=x;
        b=y;
    }
    void show_data()
    {
        cout<<"\na"<<a<<"  b"<<b;
    }
    complex add(complex c){
    complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp;

}
~complex(){
    cout<<"Destructor is called";
}
};



int main(){
    complex y,y1,y2;
    y.set_data(3,45);
    y1.set_data(4,4);
    y2=y.add(y1);
    y2.show_data();
}

