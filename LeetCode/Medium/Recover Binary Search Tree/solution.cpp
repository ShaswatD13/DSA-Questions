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
    // vector<int> v;
    // void inorder(TreeNode* root)
    // {
    //     if(root == nullptr)
    //     {
    //         return nullptr;
    //     }

    //     inorder(root -> left);
    //     v.push_back(root -> val);
    //     inorder(root -> right);
    //     return;
    // }

    // TreeNode* inorderTotree(vector<int> &a,int st,int end)
    // {
    //     if(st > end)
    //     {
    //         return nullptr;
    //     }

    //     int mid = st + (end - st)/2;
    //     TreeNode* root = new TreeNode(a[mid]);
    //     root -> left = inorderTotree(a,st,mid - 1);
    //     root -> right = inorderTotree(a,mid + 1,end);
    //     return root;
    // }

    
    TreeNode* first = nullptr;
    TreeNode* second = nullptr;
    TreeNode* prev = nullptr;
    void recoverTree(TreeNode* root) {
        // int p = 0;
        // int q = 0;

        // inorder(root);

        // for(int i = 1;i < v.size() - 1; ++i)
        // {
        //     if(v[i - 1] < v[i] && v[i + 1] < v[i])
        //     {
        //         p = i;
        //         break;
        //     }
        // }

        // for(int i = 1;i < v.size() - 1; ++i)
        // {
        //     if(v[i - 1] > v[i] && v[i + 1] > v[i])
        //     {
        //         q = i;
        //         break;
        //     }
        // }

        // swap(v[p],v[q]);

        // inorderTotree(v,0,v.size() - 1);
        // return;
        if(root == nullptr)return;
        inorder(root);

        swap(first->val,second->val);

    }
    void inorder(TreeNode* root){
        if(root==nullptr)return;

        inorder(root->left);

        if(prev && prev->val>root->val){
            if(!first)first = prev;
            second = root;
        }
        prev = root;

        inorder(root->right);
    }
};