#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <limits>
#include <math.h>
#include <utility>
#include <queue>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ip INT_MAX
#define in INT_MIN
#define pb push_back
#define pp pair<int,int>
#define nl '\n'
static ll mod = 1e9 + 7;

signed main() {
    fast;

    
    
    
    return 0;
}

class Solution {
public:
    int minMeetingsRooms(vector<vector<int>> &intervals) {
        vector<int> start, end;
        for(auto el: intervals){
            start.push_back(el[0]);
            end.push_back(el[1]);
        }

        sort(start.begin(), start.end());
        sort(end.begin(), end.end());

        int ans = 0;
        int rooms = 0;
        int i=0, j= 0;
        while(i< start.size() && j< end.size()){
            if(start[i] < end[j]) {
                rooms++;
                ans = max(ans, rooms);
                i++; 
            } else if(start[i] > end[j]) {
                rooms--;
                j++;
            } else {
                i++;
                j++;
            }
        }
        return ans;
    }
};