class Solution {
  public:
    bool isPalinArray(vector<int> &arr) {
        // code here
        int n = arr.size();
        for(int i=0;i<=n-1;i++){
            string s = to_string(arr[i]);
            int m = s.size();
            int l = 0,h = m-1;
            while(l<=h){
                if(s[l]!=s[h])return false;
                l++;h--;
            }
        }
        return true;
    }
};