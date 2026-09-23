/* Tree Node Structure
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
    int sumBT(Node* root) {
        // code here
        if(root == nullptr)
        {
            return 0;
        }
        
        int suml = sumBT(root -> left);
        int sumr = sumBT(root -> right);
        
        return suml + sumr + root -> data;
    }
};