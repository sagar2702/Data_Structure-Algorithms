/* memory efficient double linked list
   properties of XOR:
   a^b=b^a
   a^0=a
   a^a=0
   (a^b)^c=a^(b^c)
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

struct Node
{
  int data;
  struct Node* ptrdiff;//storing (next pointer XOR previous pointer)
};

struct Node *head=NULL;

//adding node at beginning
void addnode(int x)
{
  struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
  newnode->data=x;
    if(head==NULL)
    {

        newnode->ptrdiff=(struct Node*)(((uintptr_t)head)^((uintptr_t)NULL));
        head=newnode;
        return;
    }
    newnode->ptrdiff=(struct Node*)(((uintptr_t)head)^((uintptr_t)NULL));
    //updating previous head ptrdiff
    head->ptrdiff=(struct Node*)(((uintptr_t)head->ptrdiff)^((uintptr_t)newnode));
    head=newnode;
    return;

}

//deleting node from beginning
void deletenode()
{
    if(head==NULL)
    {
        printf("Nothing to delete\n");
        return;
    }
    struct Node* temp1=head;
    struct Node* temp2;
    head=temp1->ptrdiff;
    //if only one element in list then previous statement store NULL in head
    if(head==NULL)
    {
        free(temp1);
        return;
    }
    temp2=(struct Node*)(((uintptr_t)head->ptrdiff)^((uintptr_t)temp1));
    head->ptrdiff=(struct Node*)(((uintptr_t)temp2)^((uintptr_t)NULL));
    free(temp1);
}

void print()
{
    if(head==NULL)
    {
        printf("Nothing to print\n");
        return;
    }

    struct Node* temp=head;
    struct Node* temp1=NULL;
    struct Node* temp2=NULL;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp2=temp;//storing current pointer
        temp=(struct Node*)(((uintptr_t)temp->ptrdiff)^((uintptr_t)temp1));//next pointer(updating temp)
        temp1=temp2;//previous temp(pointer)
    }
    printf("\n");
}
int main()
{
    print();
    addnode(5);
    print();
    addnode(6);
    print();
    addnode(7);
    print();
    addnode(8);
    print();
    addnode(9);
    print();
    deletenode();
    print();
    deletenode();
    print();
    deletenode();
    print();
    deletenode();
    print();
    deletenode();
    print();

  return 0;
}
