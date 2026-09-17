class Solution {
  public:
    vector<int> firstNegInt(vector<int>& a, int k) {
        // code here
        int n = a.size();
        vector<int> v;
        queue<int> q;
        for(int i = 0;i < k; ++i)
        {
            if(a[i] < 0)
            {
                q.push(a[i]);
            }
        }
        
        if(q.size() > 0)
        {
            v.push_back(q.front());
        }
        else
        {
            v.push_back(0);
        }
        
        int s = 1;
        int e = k;
        while(e < n)
        {
            if(a[s-1] < 0)
            {
                q.pop();
            }
            if(a[e] < 0)
            {
                q.push(a[e]);
            }
            if(q.size() > 0)
            {
                v.push_back(q.front());
            }
            else
            {
                v.push_back(0);
            }
            s++,e++;
        }
        return v;
    }
};