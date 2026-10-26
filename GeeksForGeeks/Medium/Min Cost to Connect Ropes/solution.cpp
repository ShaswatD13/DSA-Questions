class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        priority_queue<int,vector<int>,greater<int>> minpq;
        
        for(int  i = 0;i < n; ++i)
        {
            minpq.push(arr[i]);
        }
        
        int cost = 0;
        
        for(int i = 0;i < n - 1; ++i)
        {
            int a = minpq.top();
            minpq.pop();
            
            int b = minpq.top();
            minpq.pop();
            
            int sum = a + b;
            
            cost += sum;
            
            minpq.push(sum);
        }
        
        return cost;
    }
};