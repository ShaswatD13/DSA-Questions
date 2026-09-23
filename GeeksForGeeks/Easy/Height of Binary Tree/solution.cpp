/* Structrue of Binary Tree Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    int height(Node* root) {
        // code here
        if(root == nullptr)
        {
            return -1;
        }
        
        int hl = height(root -> left);
        int hr = height(root -> right);
        
        return max(hl,hr) + 1; 
    }
};