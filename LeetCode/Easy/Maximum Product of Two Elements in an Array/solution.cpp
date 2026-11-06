class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        priority_queue<int> pq;

        for(int i = 0;i < n; ++i)
        {
            pq.push(nums[i]);
        }

        int a = pq.top() - 1;
        pq.pop();

        int b = pq.top() - 1;
        pq.pop();

        return a*b;
    }
};