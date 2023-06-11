#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

// insert at first

struct Node* first(struct Node* head, int val){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node* temp=head->next;
    while(temp->next!=head){
        temp=temp->next;
    }
    ptr->data=val;
    ptr->next=head;
    temp->next=ptr;
    head=ptr;
    return head;
}
// insert at last

struct Node* last(struct Node* head, int val){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node* temp=head->next;
    while(temp->next!=head){
        temp=temp->next;
    }
    ptr->data=val;
    ptr->next=head;
    temp->next=ptr;
    return head;
}

// insert in between

struct Node* between(struct Node* head, int val,int index){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node* temp=head;
    struct Node* temp1=head->next;
    int i=0;
    while(i!=index-1){
        temp=temp->next;
        temp1=temp1->next;
        i++;
    }
    ptr->data=val;
    ptr->next=temp1;
    temp->next=ptr;
    return head;
}


void print(struct Node* head){
    struct Node* ptr=head;
    do{
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    while(ptr!=head);
}

int main(){
  struct Node* head=(struct Node*)malloc(sizeof(struct Node))  ;
  struct Node* second=(struct Node*)malloc(sizeof(struct Node))  ;
  struct Node* third=(struct Node*)malloc(sizeof(struct Node))  ;

  head->data=8;
  head->next=second;
  second->data=88;
  second->next=third;
  third->data=888;
  third->next=head;
//   head=first(head,9);
//   head=last(head,9,2);
  head=between(head,9,3);
  print(head);
}


