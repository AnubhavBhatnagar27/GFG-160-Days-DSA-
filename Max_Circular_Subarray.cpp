// Day 12 Problem
class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {

        // your code here
        int tsum=0;
        int currmaxsum=0,currminsum=0;
        int maxsum=arr[0],minsum=arr[0];
        int n=arr.size();
        for(int i=0;i<n;i++){
            // Maximum Subarray
            currmaxsum=max(currmaxsum+arr[i],arr[i]);
            maxsum=max(maxsum,currmaxsum);
            // Minimum Subarray
            currminsum=min(currminsum+arr[i],arr[i]);
            minsum=min(minsum,currminsum);
            // All input array sum
            tsum=tsum+arr[i];
        }
        int nsum=maxsum;
        int csum=tsum-minsum;
        if(minsum==tsum){
            return nsum;
        }
        return max(nsum,csum);
    }
};