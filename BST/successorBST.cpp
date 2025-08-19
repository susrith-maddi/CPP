class solution{
public :
    Node* successor(Node* root, int target) {
        //Write your code here...
        Node* succ = nullptr;
        while(root){
            if(root->data > target){
                succ = root;
                root = root->left;
            }
            else root = root->right;
        }
        return succ;
    }
};