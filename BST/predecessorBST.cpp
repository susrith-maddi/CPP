class solution{
public:
    Node* predecessor(Node* root, int target) {
        //Write your code here...
        Node* pred = nullptr;
        while(root){
            if(root->data < target){
                pred = root;
                root = root->right;
            }
            else{
                root = root->left;
            }
        }
        return pred;
    }
};