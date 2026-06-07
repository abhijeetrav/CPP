#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
//In C++, the <cmath> header file provides access to a variety of mathematical functions. 
//To use these functions, you need to include the <cmath> header in your code using 
//#include <cmath>
using namespace std;
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int zerosPos=-1;
        int i = 0, j = 0;
        int maxLen = 0;
        int k=0;
        int count=0;
        while(j<n){
            int prev=zerosPos;
            if(nums[j]==0){
                count++;
                zerosPos++;
            }
            if(count<=1) j++;
            else{
                maxLen=max(maxLen,j-i);
                i=prev+1;
                count--;
                j++;
            }
        }
        maxLen=max(maxLen,j-i);
        return maxLen-1;
    
    }
};