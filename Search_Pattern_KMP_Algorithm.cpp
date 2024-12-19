// Day 18 Problem
class Solution {
  public:
    vector<int> search(string& pat, string& txt) {
        int n = txt.length();
        int m = pat.length();
        vector<int> lps(m, 0);
        vector<int> res;

        int len = 0;
        lps[0] = 0;
        int i = 1;
        while (i < m) {
            if (pat[i] == pat[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }

        int j = 0;
        i = 0;
        while (i < n) {
            if (txt[i] == pat[j]) {
                i++;
                j++;
                if (j == m) {
                    res.push_back(i - j);
                    j = lps[j - 1];
                }
            } else {
                if (j != 0) {
                    j = lps[j - 1];
                } else {
                    i++;
                }
            }
        }
        return res;
    }
};