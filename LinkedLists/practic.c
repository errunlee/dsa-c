#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

// struct Node* first(struct Node* head,int value,int index){
//     struct Node * ptr=(struct Node*)malloc(sizeof(struct Node));
//     struct Node *temp=head;
//     struct Node *temp1=head->next;
//     int i=0;
//     while(i!=index-1){
//         temp=temp->next;
//         temp1=temp1->next;
//         i++;
//     }
//     ptr->data=value;
//     ptr->next=temp1;
//     temp->next=ptr;
//     return head;
// }


struct Node* first(struct Node* head, int val,int index){
    struct Node* new=(struct Node*)malloc(sizeof(struct Node));
    struct Node* temp=head;
    int i=0;
    while(i!=index-1){
        temp=temp->next;
        i++;
    }
    new->data=val;
    new->next=temp->next;
    temp->next=new;
    return head;
}

void print(struct Node* head){
    struct Node* current=head;
    while(current!=NULL){
        printf("%d\n",current->data);
        current=current->next;
    }
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
  third->next=NULL;
  head=first(head,100,2);
  print(head);
}

