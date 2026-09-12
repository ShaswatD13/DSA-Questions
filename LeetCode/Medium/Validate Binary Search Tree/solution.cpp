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
    bool isValidBST(TreeNode* root) {
        if(root == nullptr)
        {
            return false;
        }

        shash(root);

        int n = v.size();

        int count = 1;
        for(int i = 1;i < n; ++i)
        {
            if(v[i-1] < v[i])
            {
                count++;
            }
        }
        if(count == n)
        {
            return true;
        }
        return false;
    }
};