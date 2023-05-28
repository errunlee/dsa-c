#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
void print(struct Node* ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
    ptr=ptr->next;

    }
}
int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    
    head->data=7;
    head->next=second;
    
    second->data=77;
    second->next=third;
    
    third->data=777;
    third->next=NULL;

    print(head);
    return 0;
}

