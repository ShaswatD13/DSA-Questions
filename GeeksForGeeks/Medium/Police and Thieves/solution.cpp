class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) {
        // Code here
        vector<int> police, thief;
        int n = arr.size();
        for(int i = 0; i < n; i++) 
        {
            if(arr[i] == 'P')
                police.push_back(i);
            else
                thief.push_back(i);
        }
        int count = 0;
        int j = 0;
        for(int i = 0; i < police.size(); i++) 
        {
            for(; j < thief.size(); j++) 
            {
                if(abs(police[i] - thief[j]) <= k) 
                {
                    count++;
                    j++;
                    break;
                }

                if(thief[j] > police[i])
                        break;
            }
        }
        return count;
    }
};