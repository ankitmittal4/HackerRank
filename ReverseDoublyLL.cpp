DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
//    DoublyLinkedListNode *temp;
//     DoublyLinkedListNode *itr = llist;
    
//     while (itr) {
//         temp = itr->next; //reserve the next
//         itr->next = itr->prev; //swap prev and next
//         itr->prev = temp;
//         llist = itr; //we do not know if there is a next element 
//         itr = temp; //iterate to next
//     }
    
//     return llist;
    if(llist == NULL || llist->next == NULL){
        return llist;
    }

    DoublyLinkedListNode* curr = llist;
    DoublyLinkedListNode* pre = NULL;
    while(curr != NULL){
        pre = curr -> prev;
        curr->prev = curr -> next;
        curr->next = pre;
        curr = curr -> prev;
    }
    // if(pre != NULL){                 //empty or 1 node
        return pre->prev;
    // }
    // return llist;
}
