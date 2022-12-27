bool has_cycle(SinglyLinkedListNode* head) {
    // if(head == NULL){
    //     return false;
    // }
    // SinglyLinkedListNode* temp = head -> next;
    // while(temp != NULL && temp != head){
    //     temp = temp -> next;
    // }
    // if(temp == NULL){
    //     return false;
    // }
    // return true;
    // if(head == NULL){
    //     return false;
    // }
    SinglyLinkedListNode* temp = head -> next;
    while(head != NULL ){
        if(head == temp){
            return true;
        }
        head = head -> next;
    }
    return false;


}
