#include <stdio.h>
#include <stdlib.h>
 
 struct stack{
    int size;
    int top;
    int *arr;
 };

 int isEmpty(struct stack *p){
    if(p->top<0){
        return 1;
    }
    return 0;
 }
 int isFull(struct stack *p){
    if(p->top==p->size-1){
        return 1;
    }
    return 0;
 }
 void push(struct stack* ptr,int value){
    if(isFull(ptr)){
        printf("Stack overflow\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
 }

    int pop(struct stack *ptr){
        if(isEmpty(ptr)){
            printf("stack empty\n");
        }
        else{
            int val=ptr->arr[ptr->top];
            ptr->top--;
            return val;
        }
    }
void print(struct stack *ptr){
    int i;
    for( i=0;i<=ptr->top;i++){
        printf("%d\n",ptr->arr[i]);
    }
 }
int main(){
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->size=5;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
    push(s,5);
    push(s,5);
    push(s,5);
    push(s,5);
    push(s,5);
    push(s,5);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    print(s);
}
