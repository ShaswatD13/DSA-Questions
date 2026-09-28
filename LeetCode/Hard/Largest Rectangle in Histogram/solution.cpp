class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
    stack<int> st;
    int ans = 0;

    for(int i = 0; i <= n; i++)
    {
        int curr;

        if(i == n)
            curr = 0;
        else
            curr = heights[i];

        while(!st.empty() && heights[st.top()] > curr)
        {
            int h = heights[st.top()];
            st.pop();

            int width;

            if(st.empty())
                width = i;
            else
                width = i - st.top() - 1;

            ans = max(ans, h * width);
        }

        st.push(i);
    }

    return ans;
    }
};