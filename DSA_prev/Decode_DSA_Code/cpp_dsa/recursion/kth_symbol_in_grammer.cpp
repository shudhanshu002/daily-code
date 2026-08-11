#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;
int kthgrammer(int n,int k)
{

    if(n==1) return 0;
    if(k%2==0){//flip,k/2
        int preans=kthgrammer(n-1,k/2);
        if(preans==1) return 0;
        else return 1;
    }
    else{//same,k/2+1
        return kthgrammer(n-1,k/2+1);
    }
}

int main()
{
    cout<<kthgrammer(4,5);
}
