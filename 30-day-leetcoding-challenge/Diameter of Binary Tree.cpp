/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int getHeight(TreeNode* node) {
        int h = 0;
        if (!node)
            return 0;
        int left = getHeight(node->left);
        int right = getHeight(node->right);
        
        if (left > right)
            h = 1 + left;
        else
            h = 1 + right;
        return h;
    }
    int diameterOfBinaryTree(TreeNode* root) { 
        if (root == NULL)  
            return 0;  
        // find depth of each subtree
        int left = getHeight(root->left);
        int right = getHeight(root->right);
        int lDepth = diameterOfBinaryTree(root->left);  
        int rDepth = diameterOfBinaryTree(root->right);
        int final_dia = max(left+right, max(lDepth, rDepth));
        return final_dia;
 
    }
};
