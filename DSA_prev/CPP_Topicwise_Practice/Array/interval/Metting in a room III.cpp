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
#define sort(v) sort(v.begin(),v.end())
#define ip INT_MAX
#define in INT_MIN
#define pb push_back
#define pp pair<int,int>
#define nl '\n'
static ll mod = 1e9 + 7;

typedef pair<long long,int > p;

int mostBooked(int n,vector<vector<int>> & meetings){
    int m = meetings.size();
    sort(begin(meetings), end(meetings));
    vector<int> roomsUsedCount(n, 0);
    priority_queue<P, vector<P>, greater<P>> usedRooms;
    priority_queue<int,vector<int> , greater<int>> unusedRooms;


    for(int room = 0;room<n;room++) {
        unusedRooms.push(room);
    }

    for(vector<int> &meet: meetings) {
        int st = meet[0];
        int end = meet[1];

        while(!usedRooms.empty() && usedRooms.top().first <= start) {
            int room = usedRooms.top().second;
            usedRooms.pop();
            unusedRooms.push(room);
        }

        if(!unusedRooms.empty()) {
            int room = unusedRooms.top();
            unusedRooms.pop();
            usedRooms.push({end, room});
            roomsUsedCount[room]++;
        } else {
            int room = usedRooms.top().second;
            long long endTime = usedRooms.top().first;
            usedRooms.pop();
            usedRooms.push({endTime + (end- st) , room});
            roomsUsedCount[room] ++;
        }


        int resultRoom = -1;
        int maxUse = 0;
        for(int room = 0; room < n;room++){
            if(roomsUsedCount[room] > maxUse) {
                maxUse = roomsUsedCount[room];
                resultRoom = room;
            }
        }

        return resultRoom;

    }
}

signed main() {
    fast;
    
    
    
    return 0;
}