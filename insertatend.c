
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {

    SinglyLinkedListNode* temp=(struct SinglyLinkedListNode* )malloc(sizeof(struct SinglyLinkedListNode*));
    temp->data=data;
    temp->next=NULL;
    SinglyLinkedListNode* current=head;
    if(current==NULL)
      return temp;
    while(current->next!=NULL){
      current=current->next;
    }
    current->next=temp;
    return head;
    }
