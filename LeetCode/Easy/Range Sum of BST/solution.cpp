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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root == nullptr)
        {
            return 0;
        }

        shash(root);
        
        int n = v.size();
        int idxl = 0;
        int idxh = 0;
        for(int i = 0;i < n; ++i)
        {
            if(v[i] == low)
            {
                idxl = i;
            }
            if(v[i] == high)
            {
                idxh = i;
            }
        }

        int sum = 0;
        for(int i = idxl;i <= idxh; ++i)
        {
            sum += v[i];
        }

        return sum;
    }
};