// Day 8 Problem
class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int mini=prices[0], res = 0;
        for (int i = 1; i < prices.size(); i++) {
            mini=min(mini, prices[i]);
            res=max(res, prices[i] - mini);
        }
        return res;
    }
};