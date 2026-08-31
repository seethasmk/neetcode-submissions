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
    int flag = 0;
    int height(TreeNode* node){
        if(flag == 1)return 0;
        if(node == nullptr)return 0;
        int lh = height(node -> left);
        int rh = height(node -> right);
        int diff = abs(lh - rh);
        if(diff > 1){
            flag = 1;
            return 0;
        }
        return 1+max(lh,rh);
    }
    bool isBalanced(TreeNode* root) {
        height(root);
        return (!flag);
    }
};
