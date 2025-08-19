class solution {
public:
    Node* deleteAllOccurrences(Node* head, int val) {
        //Write your code here...
        Node* cur = head;
        Node* pred; Node* succ;
        while(cur){
            pred = cur->prev;
            succ = cur->next;
            if(cur->data == val){
                if(cur == head) head = head->next;
                if(pred) pred->next = succ;
                if(succ) succ->prev = pred;
                delete cur;
                cur = succ;
            }
            else{
                cur = cur->next;
            }
        }
        return head;
    }
};