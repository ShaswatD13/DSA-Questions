class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        if(n == 2 && (stones[0] == stones[1]))
        {
            return 0;
        }
        priority_queue<int> pq;

        for(int i = 0;i < n; ++i)
        {
            pq.push(stones[i]);
        }

        for(int i = 0;i < n - 1; ++i)
        {
            int a = pq.top();
            pq.pop();

            int b = pq.top();
            pq.pop();

            int diff = abs(a - b);
            if((diff == 0) && (pq.size() == 0))
            {
                return 0;
            }
            else
            {
                pq.push(diff);
            }
        }
        return pq.top();
    }
};