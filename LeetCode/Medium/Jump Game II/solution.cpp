class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int maxIndex = 0;
        int currentIndex = 0;
        int jump = 0;

        for(int i = 0;i < n - 1; ++i)
        {
            maxIndex = max(maxIndex,i + nums[i]);

            if(i == currentIndex)
            {
                jump++;
                currentIndex = maxIndex;
            }
        }
        return jump;
    }
};