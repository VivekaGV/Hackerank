SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
 
 SinglyLinkedListNode* current=llist;
 SinglyLinkedListNode* prev=NULL;
 if (position==0){
   llist=llist->next;
   return llist;    
}
for(int i=0;i<position;i++){
    prev=current;
    current=current->next;
}
prev->next=current->next;
return llist;

}