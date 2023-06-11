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

void print(struct stack* p){
    int i;
    for( i=0;i<p.top;i++){
        printf("%d\n",p.arr[i]);
    }
}
int main(){
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->size=5;
    s->top=-1;
    s->arr=(int*)malloc(sizeof(int));
    push(s,4);
    push(s,44);
    push(s,444);
    print(s);
}

