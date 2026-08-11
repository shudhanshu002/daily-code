class solution {
    public: 
    static bool sortComp(Intervals &i1, Intervals &i2) {
        return i1.start < i2.start;
    }

    struct Compare {
        bool operator() (Intervals& i1, Intervals& i2){
            return i1.end > i2.end;
        }
    };

    int minMettingRooms(vector<Interval> &intervals){
        int n = intervals.size();
        if(n<=1) return n;

        sort(begin(intervals) , end(intervals), sortComp);
        priority_queue<Intervals, vector<Intervals> , Compare > pq;
        pq.push(intervals[0]);

        for(int i = 1;i<n;i++){
            Interval top = pq.top();
            Interval curr = intervals[i];

            if(top.end > curr.start) pq.push(curr);
            else {
                pq.pop();
                pq.push(curr);
            }
        }

        return (int)pq.size();
    }
}