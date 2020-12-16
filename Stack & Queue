#include <stdio.h>
#include <stdlib.h>

#define STACKMAX 10

typedef struct{
    int top;
    int data[STACKMAX];
} stack;

void push(stack *s, int item){
    if(s->top < STACKMAX){
        s->data[s->top]=item;
        s->top=s->top+1;
    }
    else{
        printf("stack is full");
    }
}

int pop(stack *s){

    int item1;
    if(s->top==0){
        printf("stack is empty\n");
        return -1;
    }
    else{
        s->top=s->top-1;
        item1=s->data[s->top];
    }

    return item1;
}
int main()
{
    int item;
    stack myStack;

    myStack.top=0;

    push(&myStack, 1);
    push(&myStack, 2);
    push(&myStack, 3);


    item=pop(&myStack);
    printf("%d\n", item);
    item=pop(&myStack);
    printf("%d\n", item);
    item=pop(&myStack);
    printf("%d\n", item);

    item=pop(&myStack);
    printf("%d\n", item);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

#define STACKMAX 10

typedef struct{
    int top;
    int data[STACKMAX];
} stack;

void push(stack *s, int item){
    if(s->top < STACKMAX){
        s->data[s->top]=item;
        s->top=s->top+1;
    }
    else{
        printf("stack is full\n");
    }
}

int pop(stack *s){

    int item1;
    if(s->top==0){
        printf("stack is empty\n");
        return -1;
    }
    else{
        s->top=s->top-1;
        item1=s->data[s->top];
    }

    return item1;
}
int main()
{
    int item;
    stack myStack;

    myStack.top=0;

    for(int i=0; i<STACKMAX; i++){
        push(&myStack, i+1);
    }



    for(int i=0; i<STACKMAX; i++){
        item=pop(&myStack);
        printf("%d\n", item);
    }


    return 0;
}




#include <stdio.h>
#include <stdlib.h>

#define STACKMAX 10

typedef struct{
    int top;
    int data[STACKMAX];
} stack;

void push(stack *s, int item){
    if(s->top < STACKMAX){
        s->data[s->top]=item;
        s->top=s->top+1;
    }
    else{
        printf("stack is full\n");
    }
}

int pop(stack *s){

    int item1;
    if(s->top==0){
        printf("stack is empty\n");
        return -1;
    }
    else{
        s->top=s->top-1;
        item1=s->data[s->top];
    }

    return item1;
}
int main()
{
    int item;
    stack myStack;

    myStack.top=0;

    push(&myStack, 1);
    push(&myStack, 2);
    push(&myStack, 3);

    push(&myStack, 4);
    push(&myStack, 5);
    push(&myStack, 6);

    push(&myStack, 7);
    push(&myStack, 8);
    push(&myStack, 9);

    push(&myStack, 10);
    push(&myStack, 11);





    item=pop(&myStack);
    printf("%d\n", item);
    item=pop(&myStack);
    printf("%d\n", item);
    item=pop(&myStack);
    printf("%d\n", item);

    item=pop(&myStack);
    printf("%d\n", item);
    item=pop(&myStack);
    printf("%d\n", item);
    item=pop(&myStack);
    printf("%d\n", item);

    item=pop(&myStack);
    printf("%d\n", item);
    item=pop(&myStack);
    printf("%d\n", item);
    item=pop(&myStack);
    printf("%d\n", item);


    item=pop(&myStack);
    printf("%d\n", item);
    item=pop(&myStack);
    printf("%d\n", item);
    item=pop(&myStack);
    printf("%d\n", item);

    return 0;
}

#include<stdio.h>

int main()
{

    int tail=0;
    for(int i=0; i<15; i++){
        tail=(tail+1)%6;
        printf("tail=%d\n", tail);
        }
    return 0;
}
#include<stdio.h>

#define QSIZE 5

typedef struct{
    int head, tail;
    int data[QSIZE+1];
} queue ;

void enqueue(queue *q, int item)
{
    if((q->tail+1)%(QSIZE+1)==q->head){
        printf("Queue is full\n");
        return ;
    }
    q->data[q->tail]=item;
    q->tail=(q->tail+1)%(QSIZE+1);
}

int dequeue(queue *q)
{
    int item;
    if(q->tail==q->head){
        printf("Queue is empty\n");
        return -1;
    }

    item=q->data[q->head];
    q->head=(q->head+1)%(QSIZE+1);

    return item;
}

int main()
{
    queue myQueue;
    int item;

    myQueue.head=0;
    myQueue.tail=0;

    enqueue(&myQueue, 1);
    printf("tail=%d\n", myQueue.tail );
    enqueue(&myQueue, 2);
    printf("tail=%d\n", myQueue.tail );
    enqueue(&myQueue, 3);
    printf("tail=%d\n", myQueue.tail );
    enqueue(&myQueue, 4);
    printf("tail=%d\n", myQueue.tail );
    enqueue(&myQueue, 5);
    printf("tail=%d\n", myQueue.tail );
    enqueue(&myQueue, 6);
    printf("tail=%d\n", myQueue.tail );

    printf("beginning head =%d\n", myQueue.head);
    item=dequeue(&myQueue);
    printf("item=%d, head=%d\n", item, myQueue.head);
    item=dequeue(&myQueue);
    printf("item=%d, head=%d\n", item, myQueue.head);
    item=dequeue(&myQueue);
    printf("item=%d, head=%d\n", item, myQueue.head);
    item=dequeue(&myQueue);
    printf("item=%d, head=%d\n", item, myQueue.head);
    item=dequeue(&myQueue);
    printf("item=%d, head=%d\n", item, myQueue.head);
    item=dequeue(&myQueue);
    printf("item=%d, head=%d\n", item, myQueue.head);
    item=dequeue(&myQueue);
    printf("item=%d, head=%d\n", item, myQueue.head);
}

