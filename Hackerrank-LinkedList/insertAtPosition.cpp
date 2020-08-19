/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode* newNode=new SinglyLinkedListNode(data);
  int i=0;
  SinglyLinkedListNode* temp=head,*temp1;
  if(position==0)
  {
      newNode->next=head;
      head=newNode;
      return head;
  }
  while(i<position-1)
  {
      temp=temp->next;
      i++;
  }
  temp1=temp->next;
  temp->next=newNode;
  newNode->next=temp1;
  return head;



}
