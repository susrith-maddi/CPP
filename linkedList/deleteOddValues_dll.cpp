class solution{
public:
    Node* deleteOddNodes(Node* head) {
        //write your code here....
        Node* cur = head;
        Node* prev;
        Node* next;
        while(cur){
            prev = cur->prev;
            next = cur->next;
            if(cur->data%2 == 1){
                if(cur == head) head = head ->next;
                if(prev) prev->next = next;
                if(next) next->prev = prev;
                delete cur;
                cur = next;
            }
            else {
                cur = cur->next;
            }
        }
        return head;
    }
};