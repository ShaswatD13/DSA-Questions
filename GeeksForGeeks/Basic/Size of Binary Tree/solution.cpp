/* Node Structure
class Node {
public:
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    int getSize(Node* root) {
        // code here
        if(root == nullptr)
        {
            return 0;
        }
        
        int sizel = getSize(root -> left);
        int sizer = getSize(root -> right);
        
        return sizel + sizer + 1;
    }
};