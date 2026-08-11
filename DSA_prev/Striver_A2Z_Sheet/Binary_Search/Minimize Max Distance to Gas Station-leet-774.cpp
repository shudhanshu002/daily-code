#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canPlace(vector<int>& stations, int k, double dist) {
        int needed = 0;

        for (int i = 0; i < stations.size() - 1; i++) {
            double gap = stations[i + 1] - stations[i];
            needed += (int)(gap / dist);
        }

        return needed <= k;
    }

    double minmaxGasDist(vector<int>& stations, int k) {
        double low = 0.0;
        double high = 0.0;

        // find maximum initial gap
        for (int i = 0; i < stations.size() - 1; i++) {
            high = max(high, (double)(stations[i + 1] - stations[i]));
        }

        // binary search on answer
        while (high - low > 1e-6) {
            double mid = (low + high) / 2.0;

            if (canPlace(stations, k, mid))
                high = mid;
            else
                low = mid;
        }

        return high;
    }
};
