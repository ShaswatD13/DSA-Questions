class Solution {
public:
    int evalRPN(vector<string>& t) {
        int n = t.size();
        stack<string> st;

        for(int i = 0;i < n; ++i)
        {
            if(t[i] == "+")
            {
                int a = stoi(st.top());
                st.pop();
                int b = stoi(st.top());
                st.pop();

                int num = b + a;
                string str = to_string(num);
                st.push(str);
            }
            else if(t[i] == "-")
            {
                int a = stoi(st.top());
                st.pop();
                int b = stoi(st.top());
                st.pop();

                int num = b - a;
                string str = to_string(num);
                st.push(str);
            }
            else if(t[i] == "*")
            {
                int a = stoi(st.top());
                st.pop();
                int b = stoi(st.top());
                st.pop();

                int num = b * a;
                string str = to_string(num);
                st.push(str);
            }
            else if(t[i] == "/")
            {
                int a = stoi(st.top());
                st.pop();
                int b = stoi(st.top());
                st.pop();

                int num = b / a;
                string str = to_string(num);
                st.push(str);
            }
            else
            {
                st.push(t[i]);
            }
        }

        return stoi(st.top());
    }
};