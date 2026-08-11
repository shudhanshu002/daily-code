#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{

    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.erase(2);
    int target=4;
    //s.find() --> it serches in the sets if not found then it returns the last element
    if(s.find(target)!=s.end()) {//target exists
        cout<<"target exixts"<<endl;
    } else cout<<"Not exist"<<endl;
    cout<<s.size()<<endl;
    for(int  ele:s){
        cout<<ele<<" ";
    }
}
