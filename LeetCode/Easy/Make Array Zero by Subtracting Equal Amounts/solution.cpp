class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        int c0s = 0;
        for(int i = 0;i < n; ++i)
        {
            if(nums[i] == 0)
            c0s++;
        }
        if(c0s == n)
        {
            return 0;
        }

        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i = 0;i < n; ++i)
        {
            if(nums[i] != 0)
            {
                pq.push(nums[i]);
            }
        }

        int count = 0;
        for(int i = 0;i < n; ++i)
        {
            int a = pq.top();
            while(pq.size() != 0)
            {
                pq.pop();
            }
            for(int j = 0;j < n; ++j)
            {
                if(nums[j] != 0) 
                {
                    nums[j] = nums[j] - a;
                }
            }

            count++;

            for(int t = 0;t < n; ++t)
            {
                if(nums[t] != 0)
                {
                    pq.push(nums[t]);
                }
            }

            int ct = 0;
            for(int k = 0;k < n; ++k)
            {
                if(nums[k] == 0)
                {
                    ct++;
                }
            }
            if(ct == n)
            {
                return count;
            }    
        }
        return count;
    }
};