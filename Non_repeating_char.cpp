// Day 17 Problem
class Solution {
  public:
    // Function to find the first non-repeating character in a string.
    const int MAX_CHAR=26;
    char nonRepeatingChar(string &s) {
        // Your code here
        vector<int> v(MAX_CHAR,-1);
        for(int i=0;i<s.length();i++){
            if(v[s[i]-'a']==-1) v[s[i]-'a']=i;
            else v[s[i]-'a']=-2;
        }
        int idx=INT_MAX;
        for(int i=0;i<MAX_CHAR;i++){
            if(v[i]>=0) idx=min(idx,v[i]);
        }
        return (idx==INT_MAX ? '$':s[idx]);
    }
};