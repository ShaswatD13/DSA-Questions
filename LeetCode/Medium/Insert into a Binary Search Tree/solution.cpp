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
    void InOrder(TreeNode* root)
    {
        if(root == nullptr)
        {
            return;
        }

        InOrder(root -> left);
        v.push_back(root -> val);
        InOrder(root -> right);
    }
    TreeNode* buildBST(vector<int>& inorder, int start, int end)
    {
        if (start > end)
        {
            return nullptr;
        }

        int mid = (start + end) / 2;

        TreeNode* root = new TreeNode(inorder[mid]);

        root->left = buildBST(inorder, start, mid - 1);
        root->right = buildBST(inorder, mid + 1, end);

        return root;
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == nullptr)
        {
            return new TreeNode(val);
        }
        
        InOrder(root);

        int n = v.size();
        vector<int> ans;

        for(int i = 0;i < n; ++i)
        {
            ans.push_back(v[i]);
        }
        ans.push_back(val);

        sort(ans.begin(),ans.end());

        return buildBST(ans,0,ans.size() - 1);
    }
};