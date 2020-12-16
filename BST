#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node{
    int data;
    Node *parents;
    Node *left;
    Node *right;
};

Node *createNode(int item, Node *node){
    Node *newNode=(Node*)malloc(sizeof(Node));
    if(newNode==NULL){
        printf("node create failed\n");
        exit(1);
    }

    node->data=item;
    node->parents=NULL;
    node->left=NULL;
    node->right=NULL;

    return newNode;
}

void addleftNode(Node *node, Node *child){
    node->left=child;
    if(child!=NULL){
        child->parents=node;
    }
}

void addrightNode(Node *node, Node *child){
    node->right=child;
    if(child!=NULL){
        child->parents=node;
    }
}
#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;

struct node{
    int data;
    Node *parents;
    Node *left;
    Node *right;
};

Node *createNode(int item){
    Node *newNode=(Node*)malloc(sizeof(Node));
    if(newNode==NULL){
        printf("node create failed\n");
        exit(1);
    }

    newNode->data=item;
    newNode->parents=NULL;
    newNode->left=NULL;
    newNode->right=NULL;

    return newNode;
}

void addleftNode(Node *node, Node *child){
    node->left=child;
    if(child!=NULL){
        child->parents=node;
    }
}

void addrightNode(Node *node, Node *child){
    node->right=child;
    if(child!=NULL){
        child->parents=node;
    }
}

Node *inSert(Node *root, Node *node){
    Node *parentNode, *currentNode;
    if(root==NULL){
        root=node;
        return root;
    }
    parentNode=NULL;
    currentNode=root;
    while(currentNode!=NULL){
            parentNode=currentNode;
        if(node->data < currentNode->data){
            currentNode=currentNode->left;
        }
        else{
            currentNode=currentNode->right;
        }
    }
    if(node->data > parentNode->data){
        addrightNode(parentNode, node);
    }
    else{
        addrightNode(parentNode, node);
    }
    return root;
}
Node *createBst()
{
    Node *root; Node *node;

    int ara[]={5,17,3,7,12,19,1,4};

    root=createNode(10);
    for(int i=0; i<8; i++){
        node=createNode(ara[i]);
        root=inSert(root, node);
    }
    return root;
}
void *postOrder(Node *currentNode){
    if(currentNode->left!=NULL){
        postOrder(currentNode->left);
    }
    if(currentNode->right!=NULL){
        postOrder(currentNode->right);
    }
    printf("%d\t",currentNode->data);

}
void *preOrder(Node *currentNode){
    printf("%d\t",currentNode->data);
    if(currentNode->left!=NULL){
        preOrder(currentNode->left);

    }
    if(currentNode->right!=NULL){
        preOrder(currentNode->right);
    }
}
int main()
{
    Node *root=createBst();
    printf("nirob\n");
    preOrder(root);

    return 0;
}
#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;

struct node{
    int data;
    Node *parent;
    Node *left;
    Node *right;
};

Node *createNode(int item){
    Node *newNode=(Node*)malloc(sizeof(Node));
    if(newNode==NULL){
        printf("node create failed\n");
        exit(1);
    }

    newNode->data=item;
    newNode->parent=NULL;
    newNode->left=NULL;
    newNode->right=NULL;

    return newNode;
}

void addleftNode(Node *node, Node *child){
    node->left=child;
    if(child!=NULL){
        child->parent=node;
    }
}

void addrightNode(Node *node, Node *child){
    node->right=child;
    if(child!=NULL){
        child->parent=node;
    }
}

Node *inSert(Node *root, Node *node){
    Node *parentNode, *currentNode;
    if(root==NULL){
        root=node;
        return root;
    }
    parentNode=NULL;
    currentNode=root;
    while(currentNode!=NULL){
            parentNode=currentNode;
        if(node->data < currentNode->data){
            currentNode=currentNode->left;
        }
        else{
            currentNode=currentNode->right;
        }
    }
    if(node->data > parentNode->data){
        addrightNode(parentNode, node);
    }
    else{
        addrightNode(parentNode, node);
    }
    return root;
}
Node *createBst()
{
    Node *root; Node *node;

    int ara[]={5,17,3,7,12,19,1,4};

    root=createNode(10);
    for(int i=0; i<8; i++){
        node=createNode(ara[i]);
        root=inSert(root, node);
    }
    return root;
}
void *postOrder(Node *currentNode){
    if(currentNode->left!=NULL){
        postOrder(currentNode->left);
    }
    if(currentNode->right!=NULL){
        postOrder(currentNode->right);
    }
    printf("%d\t",currentNode->data);

}
void *preOrder(Node *currentNode){
    printf("%d\t",currentNode->data);
    if(currentNode->left!=NULL){
        preOrder(currentNode->left);

    }
    if(currentNode->right!=NULL){
        preOrder(currentNode->right);
    }
}
Node *searchBst(Node *root, int item){
    Node *node=root;
    Node *find=NULL;
    while(node!=NULL){
        if(node->data==item){
            find=node;
            break;
        }
        if(node->data > item){
            node=node->left;
        }
        else{
            node=node->right;
        }
    }
    if(find!=NULL){
        printf("%d\n", find->data);
    }
    else{
        printf("node not found\n");
    }

}
Node *searchRecursion(Node *root, int item){
    Node *node;
    node=root;
    if(node->data > item){
        searchRecursion(node->left, item);
    }
    if(node->data < item){
        searchRecursion(node->right, right);
    }
    return node;
}
int main()
{
    Node *node;
    Node *root=createBst();
    printf("nirob\n");
    preOrder(root);
    printf("\n\n");
    postOrder(root);
    printf("\n\n");
    searchBst(root,4);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node{
    int data;
    Node *parent;
    Node *left;
    Node *right;
};
Node *createNode(int item){
    Node *newNode;
    newNode=(Node* )malloc(sizeof(Node));
    if(newNode==NULL){
        printf("node create failed\n");
        exit(0);
    }
    newNode->data=item;
    newNode->parent=NULL;
    newNode->left=NULL;
    newNode->right=NULL;

    return newNode;
}

Node *addLeftChild(Node *node, Node *child){
    node->left=child;
    if(child!= NULL){
        child->parent=node;
    }
}
Node *addRightChild(Node *node, Node *child){
    node->right=child;
    if(child!= NULL){
        child->parent=node;
    }
}

Node *insert(Node *root, Node *node){
    if(root ==NULL){
        root=node;
        return root;
    }
    Node *currentNode=root;
    Node *parentNode=NULL;

    while(currentNode!=NULL){

        parentNode=currentNode;

        if(node->data > currentNode->data){
            currentNode=currentNode->right;
        }
        else{
            currentNode=currentNode->left;
        }

    }
    if(parentNode->data > node->data){
        addLeftChild(parentNode, node);
    }
    else{
        addRightChild(parentNode, node);
    }

    return root;
}

Node *createTree(){

    Node *root, *node;
    int ara[]={5,17,3,7,12,19,1,4};

    root=createNode(10);
    for(int i=0; i<7; i++){
        node=createNode(ara[i]);

        root=insert(root, node);
    }
    return root;

}
void inorder(Node *node)
{
    if(node!=NULL)
    {
        inorder(node->left);
        printf("%d\t",node->data);
        inorder(node->right);
    }
    else
    return;
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
int main()
{
    Node *node;
    Node *root=createTree();
    printf("root:\n");
    printf("root: %d\n", root->data);
    printf("\n\n");
    printf("inorder:\t");
    inorder(root);
    printf("\n");

    printf("inorder:\t");
    inOrder(root);
    printf("\n");

    printf("preorder:\t");
    preOrder(root);
    printf("\n");

    printf("postorder:\t");
    postOrder(root);
}
#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node{
    int data;
    Node *parent;
    Node *left;
    Node *right;
};
Node *createNode(int item){
    Node *newNode;
    newNode=(Node* )malloc(sizeof(Node));
    if(newNode==NULL){
        printf("node create failed\n");
        exit(0);
    }
    newNode->data=item;
    newNode->parent=NULL;
    newNode->left=NULL;
    newNode->right=NULL;

    return newNode;
}

Node *addLeftChild(Node *node, Node *child){
    node->left=child;
    if(child!= NULL){
        child->parent=node;
    }
}
Node *addRightChild(Node *node, Node *child){
    node->right=child;
    if(child!= NULL){
        child->parent=node;
    }
}

Node *insert(Node *root, Node *node){
    if(root ==NULL){
        root=node;
        return root;
    }
    Node *currentNode=root;
    Node *parentNode=NULL;

    while(currentNode!=NULL){

        parentNode=currentNode;

        if(node->data > currentNode->data){
            currentNode=currentNode->right;
        }
        else{
            currentNode=currentNode->left;
        }

    }
    if(parentNode->data > node->data){
        addLeftChild(parentNode, node);
    }
    else{
        addRightChild(parentNode, node);
    }

    return root;
}

Node *createTree(){

    Node *root, *node;
    int ara[]={5,17,3,7,12,19,1,4};

    root=createNode(10);
    for(int i=0; i<8; i++){
        node=createNode(ara[i]);

        root=insert(root, node);
    }
    return root;

}
void inorder(Node *node)
{
    if(node!=NULL)
    {
        inorder(node->left);
        printf("%d\t",node->data);
        inorder(node->right);
    }
    else
    return;
}
void preorder(Node *node)
{
    if(node!=NULL)
    {
        printf("%d\t",node->data);
        preorder(node->left);
        preorder(node->right);
    }
    else
    return;
}
void postorder(Node *node)
{
    if(node!=NULL)
    {
        postorder(node->left);
        postorder(node->right);
        printf("%d\t",node->data);
    }
    else
    return;
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
int main()
{
    Node *node;
    Node *root=createTree();
    printf("root:\n");
    printf("root: %d\n", root->data);
    printf("\n\n");
    printf("inorder: ");
    inorder(root);
    printf("\n");

    printf("inOrder: ");
    inOrder(root);
    printf("\n");

    printf("preOrder: ");
    preOrder(root);
    printf("\n");

    printf("preorder: ");
    preorder(root);
    printf("\n");

    printf("postOrder: ");
    postOrder(root);
    printf("\n");

    printf("postorder: ");
    postorder(root);
}
Node *bstMinimum(Node *root){
    Node *node=root;
    while(node->left!=NULL){
        node=node->left;
    }
    return node;
}

Node *bstMaximum(Node *root){
    Node *node=root;
    while(node->right!=NULL){
        node=node->right;
    }
    return node;
}
