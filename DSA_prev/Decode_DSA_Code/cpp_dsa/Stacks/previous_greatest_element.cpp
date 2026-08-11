#include<iostream>
#include<stack>
using namespace std;


int main()
{
    int arr[]={3,1,4,52,5,1,5,7,3,88,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int nge[n];
    stack<int> st;
    nge[0]=-1;
    st.push(arr[0]);
    for(int i=1;i<n;i++){
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        if(st.size()==0) nge[i]=-1;
        else nge[i]=st.top();
        st.push(arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
    cout<<endl;
}
