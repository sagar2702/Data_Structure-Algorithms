/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */
DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
 DoublyLinkedListNode* temp=head, *itemp2=temp,*rtemp;
 while(itemp2->next!=nullptr){
     itemp2=itemp2->next;
     rtemp=temp->next;
     temp->next=temp->prev;
     temp->prev=rtemp;
     temp=itemp2;
 }
 head=itemp2;
 rtemp=temp->next; 
 temp->next=temp->prev;
 temp->prev=rtemp;
 return head;
}