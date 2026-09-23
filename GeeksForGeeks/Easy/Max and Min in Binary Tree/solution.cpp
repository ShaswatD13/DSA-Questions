/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    int findMax(Node *root) {
        // code here
        if(root == nullptr)
        {
            return INT_MIN;
        }
        
        int maxl = findMax(root -> left);
        int maxr = findMax(root -> right);
        
        return max(root -> data,max(maxl,maxr));
    }

    int findMin(Node *root) {
        // code here
        if(root == nullptr)
        {
            return INT_MAX;
        }
        
        int minl = findMin(root -> left);
        int minr = findMin(root -> right);
        
        return min(root -> data,min(minl,minr));
        
    }
};