/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {
  //Floyd’s Cycle-Finding Algorithm
  SinglyLinkedListNode *slowp=head, *fastp=head;
  while(fastp&&slowp&&fastp->next)
  {
     slowp=slowp->next;
     fastp=fastp->next->next;
     if(slowp==fastp) return true;
  }
 return false;
}
