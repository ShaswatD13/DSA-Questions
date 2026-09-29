class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class myQueue {

  public:
    Node* front;
    Node* rear;
    int count;

    myQueue() {
        front = nullptr;
        rear = nullptr;
        count = 0;
    }

    bool isEmpty() {
        return front == nullptr;
    }

    void enqueue(int x) {
        Node* newNode = new Node(x);

        if(front == nullptr) {
            front = newNode;
            rear = newNode;
        }
        else {
            rear->next = newNode;
            rear = newNode;
        }

        count++;
    }

    void dequeue() {
        if(front == nullptr)
            return;

        Node* temp = front;
        front = front->next;

        delete temp;
        count--;

        if(front == nullptr)
            rear = nullptr;
    }

    int getFront() {
        if(front == nullptr)
            return -1;

        return front->data;
    }

    int size() {
        return count;
    }
};