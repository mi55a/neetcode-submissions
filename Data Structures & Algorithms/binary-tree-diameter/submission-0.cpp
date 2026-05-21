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
    int leaf(TreeNode* node) {
        if(node == nullptr) {
            return 0;
        }

        return 1 + max(leaf(node->left), leaf(node->right));

    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr) {
            return 0;
        }

        int leafL = leaf(root->left);
        int leafR = leaf(root->right);
        int leafDiameter = leafL + leafR;
        int subtree = max(diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right));

        return max(leafDiameter, subtree);
        
        
    }
};
