class Solution {
public:
    int earliestFullBloom(vector<int>& pt, vector<int>& gt) {
         int n = pt.size();
        priority_queue<vector<int>> wow;
        for(int i=0;i<=n-1;i++)
        {
            wow.push({gt[i],pt[i]});
        };

        int days = 0;
        int blossom = wow.top()[0];
        while(wow.size()!=0)
        {
            days += wow.top()[1];
            blossom = max(blossom, wow.top()[0] + days);
            wow.pop();
        }
        return blossom;

    }
};