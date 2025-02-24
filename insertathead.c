SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {

  SinglyLinkedListNode* temp=(struct SinglyLinkedListNode* )malloc(sizeof(struct SinglyLinkedListNode*));
  temp->data=data;
  temp->next=llist;
  llist=temp;
  return llist; 
  }
