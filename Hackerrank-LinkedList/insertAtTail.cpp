/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {

  SinglyLinkedListNode* newNode= new SinglyLinkedListNode(data);
  if(head==nullptr)
  {
      head=newNode;
      return head;
  }
   SinglyLinkedListNode* temp=head; 
  while(temp->next!=nullptr)
  {
      temp=temp->next;
  }
  temp->next=newNode;
  return head;
  }
