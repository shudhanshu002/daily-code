#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int power=1;
    int ans=0;
    while (n>0){
        int last=n%10;
        ans =ans + (last*power);
        power*=2;
        n/=10;

    }cout<<ans;
   
    
    
    return 0;

}