bool has_cycle(SinglyLinkedListNode* head) {
    map <SinglyLinkedListNode*, bool> visited; //created a map
    if(head == NULL){    //if linked list is already empty then threre is no cycle, so return false
        return false;
    }
    SinglyLinkedListNode* temp = head;   //created a pointer temp for transversal of linked list
    while(temp != NULL){      // transverse linked list till end -> this is only possible if the linked list is linear
        if(visited[temp] == true){   //check if visited = true it means we already visited this node, then loop id present, so return true 
            return true;
        }
        visited[temp] = true;  //at everey node we mark the visited true
        temp = temp -> next;  //update the temp
    }
    return false;   //if we come at this line, it means temp has reached at NULL,  so the linked list is null, so return false 


}
