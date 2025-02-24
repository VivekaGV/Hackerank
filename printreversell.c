void reversePrint(SinglyLinkedListNode* llist) {
     #define maxsize 10000
    int s[maxsize];
    int top=-1;
    SinglyLinkedListNode* current=llist;
    while (current!=NULL){
        s[++top]=current->data;
        current=current->next;
    }
    for(int i=top;i>=0;i--)
    {
        printf("%d\n",s[i]);
    }
    
}