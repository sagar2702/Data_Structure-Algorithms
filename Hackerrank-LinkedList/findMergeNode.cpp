

// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    int count1=0,count2=0;
    SinglyLinkedListNode* temp1=head1,*temp2=head2;
    while(temp1!=nullptr){
       count1++;
        temp1=temp1->next;
    }
   while(temp2!=nullptr){
        count2++;
       temp2=temp2->next;
    }
    // cout<<count1<<count2;
    if(count1>count2){
        for(int i=0; i<count1-count2;i++){
           head1=head1->next;
        }
        while(head1!=head2){
            head1=head1->next;
            head2=head2->next;
        }
        return head1->data;
    }else{
        for(int i=0; i<count2-count1;i++){
           head2=head2->next;
        }
        while(head1!=head2){
            head1=head1->next;
            head2=head2->next;
        }
        return head1->data;
    }
}

