class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        st.push(s[0]);

        int n = s.length();
        for(int i = 1;i < n; ++i)
        {
            if(st.size() != 0 && s[i] == st.top())
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }

        string ans = "";
        while(st.size() != 0)
        {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};