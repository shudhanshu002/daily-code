#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n,0);
    int a=1;
    int temp=n;
    if(n%2!=0) n--;
    for(int i=0;i<n;i+=2){
        arr[i]=a;
        arr[i+1]=-a;
        a++;
    }
  //  if(n%2!=0) n+=1;
    for(int i=0;i<temp;i++){
        cout<<arr[i]<<"  ";
    }
}
