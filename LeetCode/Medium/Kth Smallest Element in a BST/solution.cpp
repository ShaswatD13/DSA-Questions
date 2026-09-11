/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> v;
    void shash(TreeNode* root)
    {
        if(root == nullptr)
        {
            return;
        }
        shash(root -> left);
        v.push_back(root -> val);
        shash(root -> right);
        return;
    }
    int kthSmallest(TreeNode* root, int k) {
        if(root == nullptr)
        {
            return 0;
        }

        shash(root);

        return v[k-1];
    }
};