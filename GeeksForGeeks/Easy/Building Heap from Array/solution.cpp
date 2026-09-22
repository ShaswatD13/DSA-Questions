class Solution {
  public:
    void buildHeap(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());
        
    }
};