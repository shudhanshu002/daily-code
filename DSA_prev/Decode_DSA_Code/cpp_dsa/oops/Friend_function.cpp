///friend function is not a member function of a class t which it is a friend
///friend function is declared in the class with friend keyword
///it must be defined outside the class to which it is fdriend
///it ha sno caller object
///it should not be defined with mwmbership lebel;
///membership label read it

#include <iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
    void setData(int x,int y){
        a=x;
        b=y;
    }
    void showData(){
        cout<<"\na: "<<a<<" b:"<<b;
    }
   friend void fun(complex);
};

void fun(complex c)
{
    cout<<"Sum is :"<<c.a+c.b;
}

int main()
{
    complex c1,c2,c3;
    c1.setData(3,4);
    c2.setData(12,12);
    fun(c2);

}
