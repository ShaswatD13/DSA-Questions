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
    // void shashp(TreeNode* p,vector<int> &vp)
    // {
    //     if(p == nullptr)
    //     {
    //         vp.push_back(-1);
    //         return;
    //     }
    //     vp.push_back(p -> val);
    //     shashp(p -> left,vp);
    //     shashp(p -> right,vp);

    //     return;
    // }

    // void shashq(TreeNode* q,vector<int> &vq)
    // {
    //     if(q == nullptr)
    //     {
    //         vq.push_back(-1);
    //         return;
    //     }
    //     vq.push_back(q -> val);
    //     shashq(q -> left,vq);
    //     shashq(q -> right,vq);

    //     return;
    // }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // vector<int> vp;
        // vector<int> vq;

        // if(p == nullptr && q == nullptr)
        // {
        //     return true;
        // }

        // shashp(p,vp);
        // shashq(q,vq);

        // return vp == vq;

        if(p == nullptr && q == nullptr)
        {
            return true;
        }

        if(p == nullptr || q == nullptr)
        {
            return false;
        }

        if(p -> val != q -> val)
        {
            return false;
        }

        return isSameTree(p -> left,q -> left) && isSameTree(p -> right,q -> right);
    }
};