#include <iostream>
#include <vector>
using namespace std;
struct complex
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
};

int main(){
    complex y;
    y.set_data(3,45);
    y.show_data();
}
