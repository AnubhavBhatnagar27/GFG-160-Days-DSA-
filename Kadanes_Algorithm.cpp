// Day 10 Problem
class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        // code here...
        int res=arr[0];
        int m=arr[0];
        for(int i=1;i<arr.size();i++){
            m=max(m+arr[i],arr[i]);
            res=max(res,m);
        }
        return res;
    }
};