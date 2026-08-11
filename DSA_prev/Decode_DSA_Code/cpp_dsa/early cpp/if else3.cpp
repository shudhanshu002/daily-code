#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the length"<<endl;
    float len;
    cin>>len;
    cout<<"enter the breadth"<<endl;
    float brea;
    cin>>brea;
    if(len==brea){
        cout<<"It is a square"<<endl;
    }else{
        cout<<"It is a rectangle"<<endl;
    }
    return 0;
}
