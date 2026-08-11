#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check(vector<int> &stalls,int c,int minDist)
{
    int cowPlaced = 1;
    int lastPlaced=stalls[0];
    for(int i=1;i<stalls.size();i++){
        if(stalls[i]-lastPlaced >= minDist){
            cowPlaced++;
            lastPlaced = stalls[i];
            if(cowPlaced==c) return true;
        }
    }
    return false;
}

int largestMinDist(vector<int> &stalls,int n,int c)
{
    sort(stalls.begin(),stalls.end());
    int low=1,high=stalls[n-1]-stalls[0],best=0;

    while(low<=high){
        int mid=low+(high-low)/2;
        if(check(stalls,c,mid)){
            best = mid;
            low= mid+1;
        } else {
            high = mid-1;
        }
    }
    return best;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, C;
        cin >> N >> C;
        vector<int> stalls(N);
        for (int i = 0; i < N; i++) cin >> stalls[i];

        cout << largestMinDist(stalls, N, C) << endl;
    }
    return 0;
}
