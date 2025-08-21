class solution {
public:
    int countTriplets(Node* head, int k) {
        // Write your code here...
        Node* first = head;
        Node* second = head->next;
        Node* third = head;
        while(third->next){
            third = third ->next;
        }
        Node* tempThird = third;
        int cnt = 0;
        while(first != tempThird){
            while(second->data < third->data){
                int x = first->data + second->data + third->data;
                if(x == k) {
                    cnt++;
                    second = second->next;
                    third = third->prev;
                }
                else if (x > k){
                    third = third->prev;
                }
                else{
                    second = second->next;
                }   
            } 
            first = first->next;
            second = first->next;
            third = tempThird;
        }
        
        return cnt;
    }
};