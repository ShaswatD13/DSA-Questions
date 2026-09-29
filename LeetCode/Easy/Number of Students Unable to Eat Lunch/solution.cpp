class Solution {
public:
    int countStudents(vector<int>& stu, vector<int>& san) {
        int n = stu.size();

        queue<int> q1;
        queue<int> q2;

        for(int i = 0;i < n; ++i)
        {
            q1.push(stu[i]);
            q2.push(san[i]);
        }

        int i = 0;
        while(i != 100000)
        {
            if(q1.front() == q2.front())
            {
                q1.pop();
                q2.pop();
                if(q2.size() == 0)
                {
                    return q1.size();
                }
            }
            else
            {
                q1.push(q1.front());
                q1.pop();
            }
            ++i;
        }
        return q1.size();
    }
};