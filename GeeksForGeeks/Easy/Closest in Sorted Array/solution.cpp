class Solution {
  public:
    int findClosest(vector<int>& arr, int k) {
        // Code Here
        int n = arr.size();
        
        if(k <= arr[0])
        {
            return arr[0];
        }
        
        if(k > arr[n - 1])
        {
            return arr[n - 1];
        }
        
        for(int i = 1;i < n; ++i)
        {
            if(k < arr[i] && k > arr[i - 1])
            {
                int num1 = k - arr[i - 1];
                int num2 = arr[i] - k;
                
                if(num1 == num2)
                {
                    return arr[i];
                }
                else if(num1 < num2)
                {
                    return arr[i - 1];
                }
                else
                {
                    return arr[i];
                }
            }
        }
        return k;
    }
};