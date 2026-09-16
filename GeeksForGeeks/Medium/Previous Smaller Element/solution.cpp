class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        //  code here
        int n = arr.size();
        vector<int> v(n);
        stack<int> st;
        for(int i = 0;i < n; ++i)
        {
            while(st.size() != 0 && st.top() >= arr[i])
            {
                st.pop();
            }
            if(st.size() == 0)
            {
                v[i] = -1;
            }
            else
            {
                v[i] = st.top();
            }
            st.push(arr[i]);
        }
        return v;
    }
};