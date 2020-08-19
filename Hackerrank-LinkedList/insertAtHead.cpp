
/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* head, int data){
  SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
  newNode->next=head;
  head=newNode;
  return head;

}

