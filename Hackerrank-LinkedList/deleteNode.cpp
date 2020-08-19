/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
  SinglyLinkedListNode* temp=head,*temp1;
  if(position==0){
      head=head->next;
      free(temp);
      return head;
  }
  for(int i=0;i<position-1;i++)
  {
     temp=temp->next;
  }
  temp1=temp->next->next;
  free(temp->next);
  temp->next=temp1;
  return head;
}