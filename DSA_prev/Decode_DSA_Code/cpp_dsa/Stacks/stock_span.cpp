#include<iostream>
#include<stack>
using namespace std;


int main()
{
    int arr[]={100,80,60,81,70,60,75,85};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int ngi[n];
    stack<int> st;
    ngi[0]=-1;
    st.push(0);
    for(int i=1;i<n;i++){
        while(st.size()>0 && arr[st.top()]<=arr[i]){
            st.pop();
        }
        if(st.size()==0) ngi[i]=-1;
        else ngi[i]=st.top();
        ngi[i]=i-ngi[i];
        st.push(i);
    }

    for(int i=0;i<n;i++){
        cout<<ngi[i]<<" ";
    }
    cout<<endl;
}

