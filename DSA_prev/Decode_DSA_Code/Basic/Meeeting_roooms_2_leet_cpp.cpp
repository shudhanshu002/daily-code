int minMeetingRooms(vector<vector<int>> &intervals)
{
    vector<int> st,en;
    for(auto el:intervals) {
        st.push_back(el[0]);
        en.push_back(el[1]);
    }

    sort(st.begin(),st.end());
    sort(en.begin(),en.end());
    int ans=0;
    int rooms=0;
    int i=0,j=0;
    while(i<st.size() and j < en.size()){
        if(st[i]<en[j]){
            rooms++;
            ans=max(ans,rooms);
        }
        else if(st[i]>en[j]){
            j++;
            rooms--;
        } else {
            i++;
            j++;
        }
    }
    return ans;
}
