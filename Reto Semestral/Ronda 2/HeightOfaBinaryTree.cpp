
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        return route(root)-1;
    }

    int route(Node *r) {
        int izq=0; int der=0;

        if (r!=NULL) {
            izq++;
            der++;
            izq += route(r->left);
            der += route(r->right);
        }
        return (izq > der ? izq : der);
    }

