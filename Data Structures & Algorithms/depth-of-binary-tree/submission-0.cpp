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
    int maxDepth(TreeNode* root) {

        if(root == nullptr) {
            return 0;
        }

        // divide into left and right

        TreeNode* curr = root;

        int left = maxDepth(curr->left);
        int right = maxDepth(curr->right);

        return 1 + max(left, right);
        
    }
};
