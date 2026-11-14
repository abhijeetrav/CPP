#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool canAttendMeetings(vector<vector<int>>& intervals) {
        if(intervals.empty()) return true;
        vector<int> start, ending;

        for(auto &el : intervals) {
            start.push_back(el[0]);
            ending.push_back(el[1]);
        }

        sort(start.begin(), start.end());
        sort(ending.begin(), ending.end());

        int ans = 0;
        int rooms = 0;

        int i = 0, j = 0;

        while(i < start.size()) {

            if(start[i] < ending[j]) {
                rooms++;
                ans = max(ans, rooms);
                i++;
            }
            else {
                rooms--;
                j++;
            }
        }

        return ans==1;
    }
};