/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
  SinglyLinkedListNode* prev,*curr,*nex;
  curr=head;
  prev=nullptr;
  nex=curr->next;
  while(curr!=nullptr)
  {
     curr->next=prev;
     prev=curr;
     curr=nex;
     //checking whether curr pointer to null or not
     if(curr!=nullptr)
      nex=curr->next;
  }
  head=prev;
  return head;
}

