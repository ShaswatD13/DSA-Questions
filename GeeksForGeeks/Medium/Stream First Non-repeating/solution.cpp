class Solution {
  public:
    string firstNonRepeating(string &s) {
        // code here
        // int n = s.length();
        // if(n == 1)
        // {
        //     return s;
        // }
        
        // queue<char> q;
        // q.push(s[0]);
        
        // string ans = "";
        // ans += s[0];
        
        // for(int i = 1;i < n; ++i)
        // {
        //     while(q.size() != 0 && s[i] == q.front())
        //     {
        //         q.pop();
        //     }
        //     if(s[i] != q.front())
        //     {
        //         ans += q.front();
        //         q.push(s[i]);
        //     }
        //     else
        //     {
        //         ans += '#';
        //     }
        //     q.push(s[i]);
        // }
        // return ans;
        
        int n = s.length();
        if(n == 1)
        {
            return s;
        }
        
        string ans = "";
        
        queue<char> q;
        
        unordered_map<char,int> um;
        
        for(int i = 0;i < n; ++i)
        {
            um[s[i]]++;
            if(um[s[i]] == 1)
            {
                q.push(s[i]);
            }
            
            while(q.size() != 0 && um[q.front()] > 1)
            {
                q.pop();
            }
            
            if(q.size() == 0)
            {
                ans += '#';
            }
            else
            {
                ans += q.front();
            }
        }
        return ans;
    }
};