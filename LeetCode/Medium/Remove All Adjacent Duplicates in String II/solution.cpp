class Solution {
public:
    string removeDuplicates(string s, int k) {

        // int n = s.length();
        // stack<pair<char,int>> st;

        // unordered_map<char,int> um;

        // for(int i = 0;i < n; ++i)
        // {
        //     um[s[i]]++;
        //     st.push({s[i],um[s[i]]});

        //     if(um[s[i]] == k)
        //     {
        //         for(int i = 0;i < k; ++i)
        //         {
        //             st.pop();
        //         }
        //     }
        // }

        // string ans = "";
        // while(st.size() != 0)
        // {
        //     ans += st.top().first;
        //     st.pop();
        // }

        // reverse(ans.begin(),ans.end());
        // return ans;

        int n = s.length();
        stack<pair<char,int>> st;

        for(int i = 0;i < n; ++i)
        {
            if(st.size() == 0)
            {
                st.push({s[i],1});
            }
            else
            {
                if(s[i] == st.top().first)
                {
                    st.top().second++;
                    if(st.top().second == k)
                    {
                        st.pop();
                    }
                }
                else
                {
                    st.push({s[i],1});
                }
            }
        }

        stack<char> st1;
        while(st.size() != 0)
        {
            for(int i = 0;i < st.top().second; ++i)
            {
                st1.push(st.top().first);
            }
            st.pop();
        }

        string ans = "";
        while(st1.size() != 0)
        {
            ans += st1.top();
            st1.pop();
        }

        return ans;
    }
};