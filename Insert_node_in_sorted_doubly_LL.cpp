DoublyLinkedListNode* insertAtHead(DoublyLinkedListNode* llist, DoublyLinkedListNode* nodeToInsert){ 
    cout<<"In Head"<<endl;   
    DoublyLinkedListNode* temp = llist;
    nodeToInsert -> next = temp;
    temp -> prev = nodeToInsert;
    llist = nodeToInsert;
    return llist;
}
DoublyLinkedListNode* insertAtTail(DoublyLinkedListNode* llist, DoublyLinkedListNode* nodeToInsert){    
    cout<<"In Tail"<<endl;   
    DoublyLinkedListNode* temp = llist;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
    return llist;
}

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    DoublyLinkedListNode* head = llist;
    DoublyLinkedListNode* nodeToInsert = new DoublyLinkedListNode(data);
    if(data < head -> data){
        DoublyLinkedListNode* temp = insertAtHead(llist, nodeToInsert);
        return temp;
    }
    while(head != NULL){
        cout<<"In middel"<<endl;
        cout<<head -> data<<" " << data <<endl;
        if(head->data >= data){
            cout<<"In middel inside"<<endl;
            nodeToInsert -> prev = head -> prev ;
            head -> prev -> next = nodeToInsert;
            head -> prev = nodeToInsert;
            nodeToInsert -> next = head;
            return llist;
        }
        head = head -> next;
    }
    // if(data > head -> data){
        DoublyLinkedListNode* temp = insertAtTail(llist, nodeToInsert);
        return temp;
    // }
    // return llist;

}
