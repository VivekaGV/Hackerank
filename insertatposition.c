SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* temp=(struct SinglyLinkedListNode*)malloc(sizeof(struct SinglyLinkedListNode));
    temp->data=data;
    temp->next=NULL;
    SinglyLinkedListNode* current=llist;
    if(current==NULL){
        llist = temp;
    } 
    if(position==0) {
        temp->next=llist;
        llist=temp;
    } 
    else {
        for(int i=0;i<position - 1; i++) {
            current=current->next;
        }
        temp->next=current->next;
        current->next=temp;
    }

    return llist;
}
