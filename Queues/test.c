# include <stdio.h>
# include <stdlib.h>

struct stack{
    int size;
    int top;
    int *arr; 
};

void push(struct stack* p, int val){
    if(p->top==p->size-1){
        printf("overflow");
    }
    else{
        p->top++;
        p->arr[p->top]=val;
    }
}
int pop(struct stack *ptr){
    if(ptr->top==-1){
        printf("underflow");
    }
    else{
        int val= ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
void print(struct stack* p){
    int i;
    for( i=0;i<=p->top;i++){
        printf("%d\n",p->arr[i]);
    }
}
int main(){
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->size=5;
    s->top=-1;
    s->arr=(int*)malloc(sizeof(int));
    push(s,4);
    push(s,404);
    push(s,4449);
    int r=pop(s);
    printf("popped :%d\n",r);
    print(s);
}

