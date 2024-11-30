// Day 1 Problem
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        set<int> unique(arr.begin(),arr.end());
        if(unique.size()<2) return -1;
        auto it=unique.end();
        it--;
        it--;
        return *it;
    }
};