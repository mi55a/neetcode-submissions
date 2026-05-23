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
    bool subtree(TreeNode* r, TreeNode* sub) {

        
        
        if(!r && !sub) {
            return true;
        }
        
        if(!r|| !sub|| r->val != sub->val) {
            return false;
        }


        return subtree(r->left, sub->left) && subtree(r->right, sub->right);


    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {

        if(root == nullptr) {
            return !subRoot;
        }

        if(subtree(root, subRoot)) {
            return true;
        }

        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
        

    }
};
