// Day 2
// User function template for C++
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int pos=0;
        for(int i:arr){
            if(i!=0){
                arr[pos]=i;
                pos++;
            }
        }
        while(pos<arr.size()){
            arr[pos]=0;
            pos++;
        }
        
    }
};