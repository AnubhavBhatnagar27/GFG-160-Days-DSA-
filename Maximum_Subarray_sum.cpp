// Day 11 Problem
class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        // Your Code Here
        int n=arr.size();
        int maxp=INT_MIN;
        int ltr=1,rtl=1;
        for(int i=0;i<n;i++){
            if(ltr==0) ltr=1;
            if(rtl==0) rtl=1;
            ltr*=arr[i];
            int j=n-i-1;
            rtl*=arr[j];
            maxp=max({ltr,rtl,maxp});
        }
        return maxp;
    }
};