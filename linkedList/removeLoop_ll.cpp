class solution {
public:
    Node* removeLoop(Node* head) {
        //Write Your Code Here...
        Node* fast = head;
        Node* slow = head;
        while(fast and fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                slow = head;
                while(slow->next != fast->next){
                    slow = slow->next;
                    fast = fast->next;
                }
                fast->next = nullptr;
            }
        }
        return head;
    }
};