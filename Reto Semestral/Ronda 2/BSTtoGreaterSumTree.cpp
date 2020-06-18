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
    TreeNode* bstToGst(TreeNode* root) {
        int sum = 0;
        transforma(root, sum);
        return root;
    }
    
    void transforma(TreeNode* root, int &sum) {
        if ( root != NULL ) {
            // Ve hasta la derecha
            transforma(root->right, sum);
            //Actuliza la suma y la pone en el nodo actual
            sum += root->val;
            root->val = sum;
            
            //Ve a la izquierda
            transforma(root->left, sum);
        }
    }
};
