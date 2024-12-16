// Day 19 Problem
class Solution {
  public:
    vector<int> LPSArray(string &pat){
        int n=pat.length();
        vector<int> lps(n);
        lps[0]=0;
        int len=0;
        int i=1;
        while(i<n){
            if(pat[i]==pat[len]){
                len++;
                lps[i]=len;
                i++;
            }
            else if(pat[i]!=pat[len]){
                if(len!=0){
                    len=lps[len-1];
                }
                else{
                    lps[i]=0;
                    i++;
                }
            }
        }
        return lps;
        
    }
    int minChar(string& s) {
        // Write your code here
        int n=s.length();
        string rev=s;
        reverse(rev.begin(),rev.end());
        s=s+"$"+rev;
        vector<int> lps=LPSArray(s);
        return (n-lps.back());
    }
};