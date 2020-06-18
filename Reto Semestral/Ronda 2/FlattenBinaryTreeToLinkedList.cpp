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
    void flatten(TreeNode* root) {
        if ( root != NULL ) {
            flatten(root->left);
            flatten(root->right);
            
            TreeNode *curr = root;
            TreeNode *derecha = root->right;
            root->right = root->left;
            root->left = NULL;
            
            while ( curr->right != NULL ) {
                curr = curr->right;
            }
            curr->right = derecha;
        }
    }
};
