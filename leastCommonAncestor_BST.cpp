class solution {
public:
    Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {
        //Write your code here...
        while(root){
            if(p->data < root->data and q->data < root->data){
                root = root->left;
            }
            else if(p->data > root->data and q->data > root-> data) {
                root = root->right;                
            } 
            else {
                return root;
            }
        }
        return root;
    }
};