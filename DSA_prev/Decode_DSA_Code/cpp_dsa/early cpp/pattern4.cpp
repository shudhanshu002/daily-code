#include <iostream>
using namespace std;
int main(){
    int space,rows;
    cout<<"Enter no. of rows:";
    cin>>rows;
    for(int i=1,k=0;i<=rows;++i,k=0){
        for(space=1;space<=rows-i;++space){
            cout<<" ";
        }
        while (k !=2*i-1)
        {
            cout<<"* ";
            ++k;

            /* code */
        }cout<<endl;
        
    }


    return 0;
}