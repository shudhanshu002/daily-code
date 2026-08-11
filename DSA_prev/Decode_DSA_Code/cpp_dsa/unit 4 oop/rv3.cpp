#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int sum=0;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
        sum+=v[i];
    }

    ofstream fout("sample.txt");
    if(fout) {
        fout<<sum;;
        fout.close();
    }
    else {
        cout<<"Unable to open the file for writing."<<endl;
        return 1;
    }

    ifstream fin("sample.txt");
    int sk;
    fin>>sk;
    fin.close();
    cout<<sk<<endl;
}
