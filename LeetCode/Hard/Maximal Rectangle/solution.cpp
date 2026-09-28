class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix)
    {
        if(matrix.empty())
        {
            return 0;
        }

        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<int> heights(cols, 0);

        int ans = 0;

        for(int i = 0; i < rows; i++)
        {
            // Create histogram
            for(int j = 0; j < cols; j++)
            {
                if(matrix[i][j] == '1')
                {
                    heights[j]++;
                }
                else
                {
                    heights[j] = 0;
                }
            }

            // Largest rectangle in histogram
            stack<int> st;

            for(int j = 0; j <= cols; j++)
            {
                int h;

                if(j == cols)
                {
                    h = 0;
                }
                else
                {
                    h = heights[j];
                }

                while(!st.empty() && heights[st.top()] > h)
                {
                    int height = heights[st.top()];
                    st.pop();

                    int width;

                    if(st.empty())
                    {
                        width = j;
                    }
                    else
                    {
                        width = j - st.top() - 1;
                    }

                    int area = height * width;

                    ans = max(ans, area);
                }

                if(j < cols)
                {
                    st.push(j);
                }
            }
        }

        return ans;
    }
};