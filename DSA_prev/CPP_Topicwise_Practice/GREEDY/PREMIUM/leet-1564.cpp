// https: // leetcode.ca/all/1564.html

#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <limits>
#include <math.h>
#include <utility>
#include <queue>

using namespace std;

class Solution
{
public:
    int maxBoxesInWarehouse(vector<int> &boxes, vector<int> &warehouse)
    {
        int n = warehouse.size();

        // Step 1: prefix minimum of warehouse
        for (int i = 1; i < n; i++)
        {
            warehouse[i] = min(warehouse[i], warehouse[i - 1]);
        }

        // Step 2: sort boxes ascending
        sort(boxes.begin(), boxes.end());

        int i = boxes.size() - 1; // largest box
        int j = n - 1;            // rightmost warehouse
        int used = 0;

        // Step 3: fill from right to left
        while (i >= 0 && j >= 0)
        {
            if (boxes[i] <= warehouse[j])
            {
                used++;
                i--;
                j--;
            }
            else
            {
                i--;
            }
        }

        return used;
    }
};
