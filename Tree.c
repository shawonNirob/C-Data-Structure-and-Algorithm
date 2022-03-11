#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;

struct node{
    int data;
    Node *left;
    Node *right;
};

Node *createnode(int item)
{
    Node *newNode=(Node*)malloc(sizeof(Node));
    if(newNode==NULL){
        printf("Node create faild\n");
        exit(1);
    }
    newNode->data=item;
    newNode->left=NULL;
    newNode->right=NULL;

    return newNode;
}
void addLeftchild(Node *node, int item){
    node->left=item;
}

void addRightchild(Node *node, int item){
    node->right=item;
}

void printTree(Node *node){
        printf("%d\t%d\t%d\n", node->data, node->left, node->right);

}
int main(){
    Node *node;
    node=createnode(13);

    addLeftchild(node, 5);
    addRightchild(node, 7);

    printTree(node);

    return 0;
}

#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;

struct node{
    int data;
    Node *left;
    Node *right;
};

Node *createnode(int item)
{
    Node *newNode=(Node*)malloc(sizeof(Node));
    if(newNode==NULL){
        printf("Node create faild\n");
        exit(1);
    }
    newNode->data=item;
    newNode->left=NULL;
    newNode->right=NULL;

    return newNode;
}
void addLeftchild(Node *node, int item){
    node->left=item;
}

void addRightchild(Node *node, int item){
    node->right=item;
}

void printTree(Node *root){
            printf("%d\n", root->data);
}
Node *createTree(){
    Node *two=createnode(2);
    Node *seven=createnode(7);
    Node *nine=createnode(9);
    addLeftchild(two,seven);
    addRightchild(two,nine);

    Node *one=createnode(1);
    Node *six=createnode(6);
    addLeftchild(seven,one);
    addRightchild(seven,six);

    Node *five=createnode(5);
    Node *ten=createnode(10);
    addLeftchild(six,five);
    addRightchild(six,ten);

    Node *eight=createnode(8);
    addRightchild(nine,eight);

    Node *three=createnode(3);
    Node *four=createnode(4);
    addLeftchild(eight,three);
    addRightchild(eight,four);


    return two;
}
int main(){
    Node *root=createTree();
    printTree(root);

    return 0;
}


#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;

struct node{
    int data;
    Node *left;
    Node *right;
};

Node *createnode(int item)
{
    Node *newNode=(Node*)malloc(sizeof(Node));
    if(newNode==NULL){
        printf("Node create faild\n");
        exit(1);
    }
    newNode->data=item;
    newNode->left=NULL;
    newNode->right=NULL;

    return newNode;
}
void addLeftchild(Node *node, Node *child){
    node->left=child;
}

void addRightchild(Node *node, Node *child){
    node->right=child;
}

void preorder(Node *node)
{
    printf("%d\t", node->data);

    if(node->left != NULL){
        preorder(node->left);
    }
    if(node->right != NULL){
        preorder(node->right);
    }
   //printf("\n\n");
}

void printTree(Node *root){
            printf("%d\n\n", root->data);
}
Node *createTree(){
    Node *two=createnode(2);
    Node *seven=createnode(7);
    Node *nine=createnode(9);
    addLeftchild(two,seven);
    addRightchild(two,nine);

    Node *one=createnode(1);
    Node *six=createnode(6);
    addLeftchild(seven,one);
    addRightchild(seven,six);

    Node *five=createnode(5);
    Node *ten=createnode(10);
    addLeftchild(six,five);
    addRightchild(six,ten);

    Node *eight=createnode(8);
    addRightchild(nine,eight);

    Node *three=createnode(3);
    Node *four=createnode(4);
    addLeftchild(eight,three);
    addRightchild(eight,four);


    return two;
}
int main(){
    Node *root=createTree();
    printTree(root);
    preorder(root);

    printf("\n\n\n\n");
    return 0;
}
#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;

struct node{
    int data;
    Node *left;
    Node *right;
};
int function=0;
Node *createnode(int item)
{
    Node *newNode=(Node*)malloc(sizeof(Node));
    if(newNode==NULL){
        printf("Node create faild\n");
        exit(1);
    }
    newNode->data=item;
    newNode->left=NULL;
    newNode->right=NULL;

    return newNode;
}
void addLeftchild(Node *node, Node *child){
    node->left=child;
}

void addRightchild(Node *node, Node *child){
    node->right=child;
}

void preorder(Node *node)
{
    function++;
    printf("data: %d\t", node->data);
    printf("function: %d\n", function);
    printf("\n\n");
    if(node->left != NULL){
        preorder(node->left);
    }
    printf("\nfunction 01: %d\n",function);
    if(node->right != NULL){
        preorder(node->right);
    }
    printf("\nfunction 02: %d\n", function);
   //printf("\n\n");
}

void printTree(Node *root){
            printf("%d\n\n", root->data);
}
Node *createTree(){
    Node *two=createnode(2);
    Node *seven=createnode(7);
    Node *nine=createnode(9);
    addLeftchild(two,seven);
    addRightchild(two,nine);

    Node *one=createnode(1);
    Node *six=createnode(6);
    addLeftchild(seven,one);
    addRightchild(seven,six);

    Node *five=createnode(5);
    Node *ten=createnode(10);
    addLeftchild(six,five);
    addRightchild(six,ten);

    Node *eight=createnode(8);
    addRightchild(nine,eight);

    Node *three=createnode(3);
    Node *four=createnode(4);
    addLeftchild(eight,three);
    addRightchild(eight,four);


    return two;
}
int main(){
    Node *root=createTree();
    printTree(root);
    preorder(root);

    printf("\n\n\n\n");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node{
    int data;
    Node *left;
    Node *right;
};
Node *createNode(int item){
    Node *newNode=(Node*)malloc(sizeof(Node));
    if(newNode==NULL){
        printf("node create faild\n");
        exit(1);
    }
    newNode->data=item;
    newNode->left=NULL;
    newNode->right=NULL;

    return newNode;
}
void addLeftnode(Node *node, Node *child){
    node->left=child;
}
void addRightnode(Node *node, Node *child){
    node->right=child;
}
Node *preOrder(Node *node){
    printf("%d\t", node->data);
    if(node->left!=NULL){
        preOrder(node->left);
    }
    if(node->right!=NULL){
        preOrder(node->right);
    }
}
Node *postOrder(Node *node){
    if(node->left!=NULL){
        postOrder(node->left);
    }
    if(node->right!=NULL){
        postOrder(node->right);
    }
    printf("%d\t", node->data);
}
Node *inOrder(Node *node){
    if(node->left!=NULL){
        inOrder(node->left);
    }
    printf("%d\t", node->data);

    if(node->right!=NULL){
        inOrder(node->right);
    }

}
Node *createTree(){
    Node *two=createNode(2);
    Node *seven=createNode(7);
    Node *nine=createNode(9);
    addLeftnode(two,seven);
    addRightnode(two,nine);

    Node *one=createNode(1);
    Node *six=createNode(6);
    addLeftnode(seven,one);
    addRightnode(seven,six);

    Node *five=createNode(5);
    Node *ten=createNode(10);
    addLeftnode(six,five);
    addRightnode(six,ten);

    Node *eight=createNode(8);
    addRightnode(nine,eight);

    Node *three=createNode(3);
    Node *four=createNode(4);
    addLeftnode(eight,three);
    addRightnode(eight,four);

    return two;
}

int main(){
    Node *root=createTree();
    preOrder(root);
    printf("\n\n");
    postOrder(root);
    printf("\n\n");
    inOrder(root);
    printf("\n\n");
}
#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node{
    int data;
    Node *left;
    Node *right;
};
Node *createNode(int item){
    Node *newNode=(Node*)malloc(sizeof(Node));
    if(newNode==NULL){
        printf("node create faild\n");
        exit(1);
    }
    newNode->data=item;
    newNode->left=NULL;
    newNode->right=NULL;

    return newNode;
}
void addLeftnode(Node *node, Node *child){
    node->left=child;
}
void addRightnode(Node *node, Node *child){
    node->right=child;
}
Node *preOrder(Node *node){
    printf("%d\t", node->data);
    if(node->left!=NULL){
        preOrder(node->left);
    }
    if(node->right!=NULL){
        preOrder(node->right);
    }
}
Node *postOrder(Node *node){
    if(node->left!=NULL){
        postOrder(node->left);
    }
    if(node->right!=NULL){
        postOrder(node->right);
    }
    printf("%d\t", node->data);
}
Node *inOrder(Node *node){
    if(node->left!=NULL){
        inOrder(node->left);
    }
    printf("%d\t", node->data);

    if(node->right!=NULL){
        inOrder(node->right);
    }

}
Node *createTree(){
    Node *two=createNode(2);
    Node *seven=createNode(7);
    Node *nine=createNode(9);
    addLeftnode(two,seven);
    addRightnode(two,nine);

    Node *one=createNode(1);
    Node *six=createNode(6);
    addLeftnode(seven,one);
    addRightnode(seven,six);

    Node *five=createNode(5);
    Node *ten=createNode(10);
    addLeftnode(six,five);
    addRightnode(six,ten);

    Node *eight=createNode(8);
    addRightnode(nine,eight);

    Node *three=createNode(3);
    Node *four=createNode(4);
    addLeftnode(eight,three);
    addRightnode(eight,four);

    return two;
}

int main(){
    Node *root=createTree();
    preOrder(root);
    printf("\n\n");
    postOrder(root);
    printf("\n\n");
    inOrder(root);
    printf("\n\n");
}

