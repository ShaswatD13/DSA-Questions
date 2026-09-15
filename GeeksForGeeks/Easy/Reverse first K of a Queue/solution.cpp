class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        if(k > q.size())
        {
            return q;
        }
        
        stack<int> st;
        for(int i = 0;i < k; ++i)
        {
            st.push(q.front());
            q.pop();
        }
        
        queue<int> qu;
        while(st.size() != 0)
        {
            qu.push(st.top());
            st.pop();
        }
        while(q.size() != 0)
        {
            qu.push(q.front());
            q.pop();
        }
        
        return qu;
    }
};