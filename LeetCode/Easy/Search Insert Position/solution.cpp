class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int idx = 0;

        if(target == nums[0])
        {
            return 0;
        }
        if(target > nums[n - 1])
        {
            return n;
        }

        for(int i = 1;i < n; ++i)
        {
            if(nums[i] == target)
            {
                idx = i;
                break;
            }
            if(target < nums[i] && target > nums[i - 1])
            {
                idx = i;
                break;
            }
        }
        return idx;
    }
};