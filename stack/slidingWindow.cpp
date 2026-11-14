
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> ans;

        for(int i = 0; i < n-k+1; i++) {
            int maxi = arr[i];
           for(int j = i; j < i+k; j++) {
                if(arr[j] > maxi) {
                    maxi = arr[j];
                }
            }
            ans.push_back(maxi);
        }
        return ans;
    }
};
int main() {
    Solution obj;

    vector<int> arr = {1,3,-1,-3,5,3,6,7};
    int n = arr.size();
    int k = 4;
    vector<int> ans = obj.maxSlidingWindow(arr, k);
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
