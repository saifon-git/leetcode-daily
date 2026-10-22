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
    int maxD(TreeNode* root){
        if(root==nullptr)return true;

        return 1+max(maxD(root->right),maxD(root->left));
    }

    bool isBalanced(TreeNode* root) {
        if(root==nullptr)return true;

        int left = maxD(root->left);
        int right = maxD(root->right);

        if(abs(left-right)>1)return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }
};