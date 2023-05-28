// insertion cases

// inset at beginning o(1), at end o(n), in between o(n) and after a node o(1)

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* insertAtFirst(struct Node *head, int value){
    struct Node * ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=value;
    ptr->next=head;
    return ptr;
}


// in between

struct Node* insertAtBetween(struct Node *head,int value,int index){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    int i=0;
    struct Node *temp=head;
    while(i!=index-1){
        temp=head->next;
        i++;
    }
    ptr->data=value;
    ptr->next=temp->next;
    temp->next=ptr;
    return head;

}
// at last

struct Node* insertAtLast(struct Node* head,int value){
    struct Node * ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node *temp=head;
    while(temp->next!=NULL){
        temp=head->next;
    }
    ptr->data=value;
    ptr->next=NULL;
    temp->next=ptr;
    return head;
}

// 

// after a node
struct Node* insertAfterANode(struct Node* head,struct Node* prevNode,int val){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=val;
    newNode->next=prevNode->next;
    prevNode->next=newNode;
    return head;
}



// 
void print(struct Node* ptr){
    while(ptr!=NULL){
        printf("data%d\n",ptr->data);
        ptr=ptr->next;
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
    // head=insertAtFirst(head,56);
    // head=insertAtBetween(head,55,2);
    // head=insertAtLast(head,77);
    head=insertAfterANode(head,third,69);
    print(head);
    return 1;
}