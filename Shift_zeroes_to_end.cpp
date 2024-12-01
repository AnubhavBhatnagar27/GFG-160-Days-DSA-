<<<<<<< HEAD
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
=======
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
>>>>>>> 683f1219b9e9064d511c36dcb6c6e87093e8bc31
};