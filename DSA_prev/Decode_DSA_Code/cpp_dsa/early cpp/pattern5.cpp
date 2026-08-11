#include <iostream>
using namespace std;

int main() {
    int rows;
    cout<<"Enter no. of rows:";
    cin>>rows;
    for(int i=rows;i>=1;--i){
        for(int space=0;space<rows-i;++space){
            cout<<" ";
            for(int j=i;j<=2*i-1){}
        }
    }


    return 0;
}


