#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node * next;
}*top =NULL;

void push(int x)
{
    struct Node *t;
    t=(struct Node*)malloc(sizeof(struct Node));
    if(t==NULL){
        printf("Stack is full\n");
    }
    else{
    t->data=x;
    t->next=top;
    top=t;
    }
}

int pop()
{
    int x=-1;
    struct Node *t;
    
    if(top==NULL)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        t=top;
        top=top->next;
        x=t->data;
        free(t);
    }
    return x;
    
}
void Display()
{
    struct Node *p;
    p=top;
    while(p)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
int main()
{
    push(10);
    push(40);
    push(20);
    push(30);
    
    Display();
    
    printf("%d ",pop());
}
