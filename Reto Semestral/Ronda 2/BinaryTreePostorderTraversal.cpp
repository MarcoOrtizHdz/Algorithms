/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void postOrden(TreeNode* r, vector<int> &v) {
        if ( r != NULL ) {
            postOrden(r->left, v);
            postOrden(r->right, v);
            v.push_back(r->val);
        }
}

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> v;
        postOrden(root, v);
        return v;
    }
};
    
  
