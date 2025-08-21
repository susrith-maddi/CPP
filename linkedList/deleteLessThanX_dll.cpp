class solution{
    public:
    Node* deleteNodesLessThanX(Node* head, int x) {
        // Write your code here...
        Node* cur = head;
        Node* prev;
        Node* next;
        while(cur){
            prev = cur->prev;
            next = cur->next;
            if(cur->data < x){
                if(cur == head) head = head->next;
                if(prev) prev->next = next;
                if(next) next->prev = prev;
                delete cur;
                cur = next;
            }
            else cur = cur->next;
        }
        return head;
    }

};