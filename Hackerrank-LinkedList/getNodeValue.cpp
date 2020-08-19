/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int getNode(SinglyLinkedListNode* head, int positionFromTail) {
 SinglyLinkedListNode * temp=head;
 int n=0;
 while(temp!=nullptr){
    n++;
    temp=temp->next;
 }
 int x=n-positionFromTail;
 while(x-->1)
 {
    head=head->next;
 }
 return head->data;
}

