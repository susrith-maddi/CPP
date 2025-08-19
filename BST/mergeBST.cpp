class solution {
public:
    void push_left(Node* root, stack<Node*> &s){
        while(root){
            s.push(root);    
            root = root->left;
        }
    }
    vector<int> mergeBSTs(Node* root1, Node* root2) {
        //Write your code here...
        stack<Node*> s1,s2;
        push_left(root1, s1);
        push_left(root2, s2);
        vector<int> ans;
        while(!s1.empty() or !s2.empty()){
            if(s1.empty() or (!s2.empty() and (s2.top()->data < s1.top()->data))){
                Node* temp = s2.top();
                s2.pop();
                push_left(temp->right, s2);
                ans.push_back(temp->data);
            }
            else{
                Node* temp = s1.top();
                s1.pop();
                push_left(temp->right, s1);
                ans.push_back(temp->data);
            }
        }
        return ans;
        
    }
};