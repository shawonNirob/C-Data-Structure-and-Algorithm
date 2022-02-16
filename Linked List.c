#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;

struct node{
    int data;
    Node *next;
};

Node *head;

Node *createNode(int item, Node *next){
    Node *newNode;
    newNode=( Node *) malloc(sizeof(Node));
    if(newNode==NULL){
        printf("Error ! Could not create a new node");
        exit(1);
    }

    newNode->data=item;
    newNode->next=next;
}

int main()
{
    Node *n;
    n=createNode(10, NULL);

    printf("data=%d", n->data);

    return 0;
}

//
#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node{
    int data;
    Node *next;
};

void printlinkedlist(Node *p){
        int n=0;
        while(p!=NULL){
            printf("%d\n", p->data);
            p=p->next;
            n++;
        }
        printf("Number of node %d\n",n);

}

int main(){
    Node *head;
    Node *one=NULL;
    Node *two=NULL;
    Node *three=NULL;

    one=(Node*)malloc(sizeof(Node));
    two=(Node*)malloc(sizeof(Node));
    three=(Node*)malloc(sizeof(Node));

    one->data=1;
    two->data=2;
    three->data=3;

    one->next=two;
    two->next=three;
    three->next=NULL;

    head=one;
    printlinkedlist(head);

    return 0;

}
//
// Linked list implementation in C

#include <stdio.h>
#include <stdlib.h>

// Creating a node
struct node {
  int value;
  struct node *next;
};

// print the linked list value
void printLinkedlist(struct node *p) {
  while (p != NULL) {
    printf("%d ", p->value);
    p = p->next;
  }
}

int main() {
  // Initialize nodes
  struct node *head;
  struct node *one = NULL;
  struct node *two = NULL;
  struct node *three = NULL;

  // Allocate memory
  one = malloc(sizeof(struct node));
  two = malloc(sizeof(struct node));
  three = malloc(sizeof(struct node));

  // Assign value values
  one->value = 1;
  two->value = 2;
  three->value = 3;

  // Connect nodes
  one->next = two;
  two->next = three;
  three->next = NULL;

  // printing node-value
  head = one;
  printLinkedlist(head);
}

//Prehend
//Insert Node before Head


#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node{
    int data;
    Node *next;
};

Node *createNode(int item, Node *next){
    Node *newNode;
    newNode=(Node *)malloc(sizeof(Node));
    if(newNode==NULL){
        printf("memory allocation failed\n");
        exit(1);
    }

    newNode->data=item;
    newNode->next=next;

    return newNode;
}

Node *prehend(int item, Node *head){
    Node *newNode;
    newNode=createNode(item, head);

    return newNode;
}

int main()
{
    Node *n1, *n2, *n3, *head;
    n1=createNode(10, NULL);
    head=n1;

    head=prehend(20, head);

    n2=head;
    printf("first data %d\n",n2->data);

    n3=n2->next;
    printf("second data %d\n",n3->data);

    return 0;

}


//append
//Insert Node middle of Node

#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node{
    int data;
    Node *next;
};

Node *createNode(int item, Node *next){
    Node *newNode;
    newNode=(Node*)malloc(sizeof(Node));
    if(newNode==NULL){
        printf("new node create failled");
        exit(1);
    }

    newNode->data=item;
    newNode->next=next;

    return newNode;
}

Node *prepend(int item, Node *head){
    Node *newNode;
    newNode=createNode(item, head);

    return newNode;
}

Node *append(int item, Node *head){
    Node *newNode;
    newNode=createNode(item, NULL);
    if(head==NULL){
        return newNode;
    }

    Node *currentNode;
    currentNode=head;
    while(currentNode->next!=NULL){
        currentNode=currentNode->next;
    }
    currentNode->next=newNode;

    return head;
}

void printLinkedlist(Node *head){
    Node *currentNode;
    currentNode=head;
    while(currentNode!=NULL){
        printf("%d\t", currentNode->data);
        currentNode=currentNode->next;
    }
    printf("\n");
}

int main()
{
    Node *n1, *head;

    n1=createNode(10, NULL);
    head=n1;
    printLinkedlist(head);

    head=prepend(20, head);
    printLinkedlist(head);

    head=append(30, head);
    printLinkedlist(head);

    return 0;
}
//

//

#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node{
    int data;
    Node *next;
};

Node *createNode(int item, Node *next){
    Node *newNode;
    newNode=(Node*)malloc(sizeof(Node));
    if(newNode==NULL){
        printf("new node create failled");
        exit(1);
    }

    newNode->data=item;
    newNode->next=next;

    return newNode;
}

Node *prepend(int item, Node *head){
    Node *newNode;
    newNode=createNode(item, head);

    return newNode;
}

Node *append(int item, Node *head){
    Node *newNode;
    newNode=createNode(item, NULL);
    if(head==NULL){
        return newNode;
    }

    Node *currentNode;
    currentNode=head;
    while(currentNode->next!=NULL){
        currentNode=currentNode->next;
    }
    currentNode->next=newNode;

    return head;
}

void printLinkedlist(Node *head){
    Node *currentNode;
    currentNode=head;
    while(currentNode!=NULL){
        printf("%d\t", currentNode->data);
        currentNode=currentNode->next;
    }
    printf("\n");
}

void search(int x, Node *head){
        Node *currentNode=head;
        int node=1;
        while(currentNode!=NULL){
            if(currentNode->data==x){
                break;
                }
            node++;
            currentNode=currentNode->next;
        }
        if(currentNode==NULL){
            printf("%d not found\n", x);
        }
        else{
            printf("%d found in node %d", x,node);
        }
}

int main()
{
    Node *n1, *head;

    head=createNode(10, NULL);
    printLinkedlist(head);

    head=prepend(20, head);
    printLinkedlist(head);

    head=append(30, head);
    printLinkedlist(head);

    search(10, head);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node{
    int data;
    Node *next;
};

Node *createNode(int item, Node *next){
    Node *newNode;
    newNode=(Node*)malloc(sizeof(Node));
    if(newNode==NULL){
        printf("new node create failled");
        exit(1);
    }

    newNode->data=item;
    newNode->next=next;

    return newNode;
}

Node *prepend(int item, Node *head){
    Node *newNode;
    newNode=createNode(item, head);

    return newNode;
}

Node *append(int item, Node *head){
    Node *newNode;
    newNode=createNode(item, NULL);
    if(head==NULL){
        return newNode;
    }

    Node *currentNode;
    currentNode=head;
    while(currentNode->next!=NULL){
        currentNode=currentNode->next;
    }
    currentNode->next=newNode;

    return head;
}

void printLinkedlist(Node *head){
    Node *currentNode;
    currentNode=head;
    while(currentNode!=NULL){
        printf("%d\t", currentNode->data);
        currentNode=currentNode->next;
    }
    printf("\n");
}

void search(int x, Node *head){
        Node *currentNode=head;
        int node=1;
        while(currentNode!=NULL){
            if(currentNode->data==x){
                break;
                }
            printf("node %d\n\n", node);
            node++;
            currentNode=currentNode->next;
            printf("node %d\n", node);

        }
        if(currentNode==NULL){
            printf("%d not found\n", x);
        }
        else{
            printf("%d found in node %d\n", x,node);
        }
}

int count(Node *head){
    Node *currentNode;
    currentNode=head;
    int node=1;
    while(currentNode->next!=NULL){

            printf("node %d\n", node);
            printf("CurrentNode %d\n", currentNode->data);
            //printf("CurrentNode %p\n", currentNode->next);
            printf("");

            node++;
            currentNode=currentNode->next;
             printf("node %d\n", node);

    }
    printf("Total node number %d\n", node);
}

int main()
{
    Node *n1, *head;

    head=createNode(10, NULL);
    printLinkedlist(head);

    head=prepend(20, head);
    printLinkedlist(head);

    head=append(30, head);
    printLinkedlist(head);



    head=prepend(90, head);
    printLinkedlist(head);

    search(30, head);
    count(head);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

#define bug 1

typedef struct node Node;

struct node{
    int data;
    Node *next;
};

Node *createNode(int item, Node *next){
    Node *newNode;
    newNode=(Node*)malloc(sizeof(Node));
    if(newNode==NULL){
        printf("new node create failled");
        exit(1);
    }

    newNode->data=item;
    newNode->next=next;

    return newNode;
}

Node *prepend(int item, Node *head){
    Node *newNode;
    newNode=createNode(item, head);

    return newNode;
}

Node *append(int item, Node *head){
    Node *newNode;
    newNode=createNode(item, NULL);
    if(head==NULL){
        return newNode;
    }

    Node *currentNode;
    currentNode=head;
    while(currentNode->next!=NULL){
        currentNode=currentNode->next;
    }
    currentNode->next=newNode;

    return head;
}

Node *removeNode(Node *head, Node *node){
    if(node==head){
        head=node->next;

        free(node);
        return head;
    }
    Node *currentNode=head;
    while(currentNode!=NULL){
        if(currentNode->next==node){
            break;
        }
        currentNode=currentNode->next;
    }
    if(currentNode==NULL){
        printf("Node not found\n");
        return head;
    }
    currentNode->next=node->next;
    free(node);

    return head;
}

void printLinkedlist(Node *head){
    Node *currentNode;
    currentNode=head;
    while(currentNode!=NULL){
        printf("%d\t", currentNode->data);
        currentNode=currentNode->next;
    }
    printf("\n");
}

void search(int x, Node *head){
        Node *currentNode=head;
        int node=1;
        while(currentNode!=NULL){
            if(currentNode->data==x){
                break;
                }
            printf("node %d\n\n", node);
            node++;
            currentNode=currentNode->next;
            printf("node %d\n", node);

        }
        if(currentNode==NULL){
            printf("%d not found\n", x);
        }
        else{
            printf("%d found in node %d\n", x,node);
        }
}

int count(Node *head){
    Node *currentNode;
    currentNode=head;
    int node=1;
    while(currentNode->next!=NULL){

            printf("node %d\n", node);
            printf("CurrentNode %d\n", currentNode->data);
            //printf("CurrentNode %p\n", currentNode->next);
            printf("");

            node++;
            currentNode=currentNode->next;
             printf("node %d\n", node);

    }
    printf("Total node number %d\n", node);
}

int main()
{
    Node *n1,*n2, *n3,*n4 ,*head;

    n1=createNode(10, NULL);
    head=n1;
    printLinkedlist(head);

    n2=prepend(20, head);
    head=n2;
    printLinkedlist(head);

    head=append(80, head);
    printLinkedlist(head);



    head=prepend(90, head);
    printLinkedlist(head);

    search(10, head);
    count(head);

    head=removeNode(head,n2);
    printLinkedlist(head);

     head=removeNode(head,n1);
    printLinkedlist(head);


    return 0;
}
#include <stdio.h>
#include <stdlib.h>

#define bug 1

typedef struct node Node;

struct node{
    int data;
    Node *next;
};

Node *createNode(int item, Node *next){
    Node *newNode;
    newNode=(Node*)malloc(sizeof(Node));
    if(newNode==NULL){
        printf("new node create failled");
        exit(1);
    }

    newNode->data=item;
    newNode->next=next;

    return newNode;
}

Node *prepend(int item, Node *head){
    Node *newNode;
    newNode=createNode(item, head);

    return newNode;
}

Node *append(int item, Node *head){
    Node *newNode;
    newNode=createNode(item, NULL);
    if(head==NULL){
        return newNode;
    }

    Node *currentNode;
    currentNode=head;
    while(currentNode->next!=NULL){
        currentNode=currentNode->next;
    }
    currentNode->next=newNode;

    return head;
}

Node *removeNode(Node *head, Node *node){
    if(node==head){
        head=node->next;

        free(node);
        return head;
    }
    Node *currentNode=head;
    while(currentNode!=NULL){
        if(currentNode->next==node){
            break;
        }
        currentNode=currentNode->next;
    }
    if(currentNode==NULL){
        printf("Node not found\n");
        return head;
    }
    currentNode->next=node->next;
    free(node);

    return head;
}
void printLinkedlist(Node *head){
    Node *currentNode;
    currentNode=head;
    while(currentNode!=NULL){
        printf("%d\t", currentNode->data);
        currentNode=currentNode->next;
    }
    printf("\n");
}

void *insert(Node *node, int item){
    Node *newNode;
    newNode=createNode(item, node->next);
    node->next=newNode;
}

void search(int x, Node *head){
        Node *currentNode=head;
        int node=1;
        while(currentNode!=NULL){
            if(currentNode->data==x){
                break;
                }
            printf("node %d\n\n", node);
            node++;
            currentNode=currentNode->next;
            printf("node %d\n", node);

        }
        if(currentNode==NULL){
            printf("%d not found\n", x);
        }
        else{
            printf("%d found in node %d\n", x,node);
        }
}

int count(Node *head){
    Node *currentNode;
    currentNode=head;
    int node=1;
    while(currentNode->next!=NULL){

            printf("node %d\n", node);
            printf("CurrentNode %d\n", currentNode->data);
            //printf("CurrentNode %p\n", currentNode->next);
            printf("");

            node++;
            currentNode=currentNode->next;
             printf("node %d\n", node);

    }
    printf("Total node number %d\n", node);
}

int main()
{
    Node *n1,*n2, *n3,*n4 ,*head;

    n1=createNode(10, NULL);
    head=n1;
    printLinkedlist(head);

    n2=prepend(20, head);
    head=n2;
    printLinkedlist(head);

    head=append(80, head);
    printLinkedlist(head);



    head=prepend(90, head);
    printLinkedlist(head);

    search(10, head);
    count(head);

    head=removeNode(head,n2);
    printLinkedlist(head);

    insert(n1, 23);
    printLinkedlist(head);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;

struct node{
    int data;
    Node *next;
    Node *prev;
};

Node *createNode(int item, Node *next, Node *prev){
    Node *newNode;
    newNode=(Node*)malloc(sizeof(Node));
    if(newNode==NULL){
        printf("node ceate failed");
        exit(1);
    }

    newNode->data=item;
    newNode->next=next;
    newNode->prev=prev;

    return newNode;
}

Node *prepend(Node *head,int item){
    Node *newNode;
    newNode=createNode(item, head, NULL);

    newNode->next->prev=newNode;
    return newNode;

}

Node *append(Node *head, int item){
    Node *newNode=createNode(item,NULL,NULL);
    if(head==NULL){
        return newNode;
    }
    Node *currentNode=head;
    while(currentNode->next!=NULL){
        currentNode=currentNode->next;
    }
    newNode->prev=currentNode;
    currentNode->next=newNode;

    return head;

}

Node *removeNode(Node *head, Node *node){
    if(node==head){
        head=node->next;
        head->prev=NULL;

        free(node);
        return head;
    }
    Node *previousNode=node->prev;
    Node *nextNode=node->next;

    previousNode->next=node->next;
    nextNode->prev=previousNode;

    free(node);

    return 0;

}
void *insert(Node *node, int item){
    Node *newNode;
    newNode=createNode(item, node->next, node->next->prev);
    node->next=newNode;
    node->next->prev=newNode;
}

printLinkedlist(Node *head){
    Node *currentNode;
    currentNode=head;
    while(currentNode!=NULL){
        printf("%d\t", currentNode->data);
        currentNode=currentNode->next;
    }
    printf("\n");
}



int main(){
    Node *head, *n1, *n2, *n3;

    n3=createNode(10,NULL,NULL);
    head=n3;
    printLinkedlist(head);

    n1=prepend(head,20);
    head=n1;
    printLinkedlist(head);

    n2=append(head, 30);
    head=n2;
    printLinkedlist(head);

    head=removeNode(head, n1);
    printLinkedlist(head);

    insert(n3, 40);
    printLinkedlist(head);
}

