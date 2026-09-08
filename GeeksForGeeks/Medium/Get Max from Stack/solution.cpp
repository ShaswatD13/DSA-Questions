class SpecialStack {
  public:
  
    stack<pair<int,int>> st;
    
    SpecialStack() {
        // Define Stack
    }
    void push(int x) {
        // Push an element into the stack
        if(st.size() == 0)
        {
            st.push({x,x});
        }
        else
        {
            int maximum = max(x,st.top().second);
            st.push({x,maximum});
        }
    }

    void pop() {
        // Remove the top element from the Stack
        if(st.size() != 0)
        {
            st.pop();
        }
    }

    int peek() {
        // Returns the top element
        if(st.size() != 0)
        {
            return st.top().first;
        }
        return -1;
    }

    bool isEmpty() {
        // Check if stack is empty
        return st.empty();
    }

    int getMax() {
        // Return maximum element of Stack
        if(st.size() != 0)
        {
            return st.top().second;
        }
        return -1;
    }
};