class solution {
public:
    vector<pair<int, int>> getPairs(Node* head, int val) {
        //Write your code here...
        Node* left = head;
        Node* right = head;
        vector<pair<int,int>> ans;
        while(right->next){
            right = right->next;
        }
        while(left->data < right->data){
            int x = left->data + right->data;
            if(x == val){
                ans.emplace_back(left->data, right->data);
                left = left->next;
                right = right->prev;
            }
            else if (x < val){
                left = left->next;
            }
            else{
                right = right->prev;
            }
        }
        return ans;
    }
};