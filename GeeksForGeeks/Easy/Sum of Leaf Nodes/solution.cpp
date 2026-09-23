/* A Binary Tree Node
class Node
{
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        data = x;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    int leafSum(Node* root) {
        // code here
        if(root == nullptr)
        {
            return 0;
        }
        
        if(root -> left == nullptr && root -> right == nullptr)
        {
            return root -> data;
        }
        
        int l = leafSum(root -> left);
        int r = leafSum(root -> right);
        
        return l + r; 
    }
};