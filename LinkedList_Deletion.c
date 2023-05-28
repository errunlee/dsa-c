// cases
// delete first node, delete at end, delete at a index or in between, delete after a node;
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
// at first deletion
struct Node* deleteAtFirst(struct Node* head){
    struct Node*ptr=head;
    head=head->next;
    free(ptr);
    return head;
}

// in between deletion
struct Node* deleteInBetween(struct Node* head,int index){
    struct Node*ptr=head;

    int i=0;
    while(i!=index-1){
        ptr=ptr->next;
        i++;
    }
    struct Node* q=ptr->next;

    ptr->next=q->next;
    free(q);
    return head;
}

// at last
struct Node* delAtLast(struct Node* head){
    struct Node*ptr=head;
    struct Node*ptr1=ptr->next;

    while(ptr1->next!=NULL){
        ptr=ptr->next;
        ptr1=ptr->next;
    }
    ptr->next=NULL;
    free(ptr1);
    return head;
}

// given is  a node
struct Node* delAtIndex(struct Node* head,struct Node* delNode){
   struct Node* ptr=delNode;
   struct Node* temp=head;
    while(temp->next!=ptr){
        temp=temp->next;
    }
    temp->next=ptr->next;
    free(ptr);
    return head;
}

// delete after a given value is found

struct Node* deleteByValue(struct Node* head,int  value){
   struct Node* ptr=head;
   struct Node* ptr1=ptr->next;
   while(ptr1->data!=value && ptr1->next!=NULL){
    ptr=ptr->next;
    ptr1=ptr1->next;

   }
   if(ptr1->data==value){
    ptr->next=ptr1->next;
    free(ptr1);
   }
    return head;
}


void print(struct Node* head){
    while(head!=NULL){
        printf("elem: %d\n",head->data);
        head=head->next;
    }
}

int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    head->data=7;
    head->next=second;
    second->data=9;
    second->next=third;
    third->data=99;
    third->next=fourth;
    fourth->data=999;
    fourth->next=NULL;

    // head=deleteAtFirst(head);
    // head=deleteInBetween(head,2);
    // head=delAtLast(head);
    // head=delAtIndex(head,fourth);
    head=deleteByValue(head,99);
    print(head);
}
