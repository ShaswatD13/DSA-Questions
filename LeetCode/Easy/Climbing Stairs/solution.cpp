class Solution {
public:
    vector<int> dp;

    int ways(int i,int n)
    {
        if(i == n)
        {
            return 1;
        }
        if(i > n)
        {
            return 0;
        }

        if(dp[i] == -1)
        {
            int a = ways(i + 1,n);
            int b = ways(i + 2,n);
            dp[i] = a + b;
        }
        return dp[i];
    }
    int climbStairs(int n) {
        dp.resize(n + 1, -1);
        return ways(0,n);
    }
};