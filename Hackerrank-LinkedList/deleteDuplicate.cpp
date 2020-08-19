/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
 SinglyLinkedListNode* temp=head,*temp2=temp->next;
 while(temp2!=nullptr)
 {
     if(temp->data==temp2->data)
     {
       temp->next=temp2->next;
       free(temp2);
       temp2=temp->next;
       continue;
     }
     temp=temp->next;
     if(temp!=nullptr)
      temp2=temp->next;
 }
 return head;
}