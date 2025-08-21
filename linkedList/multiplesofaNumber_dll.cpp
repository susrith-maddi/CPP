class solution{
    public:
        Node* deleteNodesDivisibleByM(Node* head, int m) {
            //Write Your Code Here...
            Node* cur = head;
            Node* prev;
            Node* next;
            while(cur){
                prev = cur->prev;
                next = cur->next;
                if(cur->data % m == 0){
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