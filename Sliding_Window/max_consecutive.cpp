#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0, j = 0;
        int flips = 0;
        int maxLen = 0;
        int n = nums.size();
        while (j < n) {
            if (nums[j] == 0) {
                flips++;
            }

            while (flips > k) {
                if (nums[i] == 0) {
                    flips--;
                }
                i++;
            }
            maxLen = max(maxLen, j - i + 1);
            j++;
        }

        return maxLen;
    }
};
