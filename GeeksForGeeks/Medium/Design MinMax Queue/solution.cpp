class SpecialQueue {

  public:

    queue<int> q;
    deque<int> minQ;
    deque<int> maxQ;

    void enqueue(int x) {

        q.push(x);

        while(!minQ.empty() && minQ.back() > x)
            minQ.pop_back();

        minQ.push_back(x);

        while(!maxQ.empty() && maxQ.back() < x)
            maxQ.pop_back();

        maxQ.push_back(x);
    }

    void dequeue() {

        int x = q.front();
        q.pop();

        if(!minQ.empty() && minQ.front() == x)
            minQ.pop_front();

        if(!maxQ.empty() && maxQ.front() == x)
            maxQ.pop_front();
    }

    int getFront() {
        return q.front();
    }

    int getMin() {
        return minQ.front();
    }

    int getMax() {
        return maxQ.front();
    }
};