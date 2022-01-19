#include<stdio.h>

void func_1();
int a=5, b = 10;

int main()
{
    printf("Before call main function a = %d\n", a);
    printf("Before call main function b = %d\n", b);
    func_1();
    func_1();
    func_1();
    printf("After call main function a = %d\n", a);
    printf("After call main function b = %d\n", b);
    return 0;
    // signal to operating system everything works fine
    return 0;
}

void func_1()
{

    printf("in function 1 a = %d\n", a);
    printf("in function 1 b = %d\n\n", b);
    a++;
    b++;
}

//

#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 3
int stack[CAPACITY];
int top=-1;

void push(int x){
    if(top<CAPACITY-1){
            top=top+1;
            stack[top]=x;
            printf("successfully item added %d\n", x);
    }
    else{
        printf("exception! No space is required\n");
    }

}
int peek(){
    if(top>=0){
        return stack[top];
    }
    else{
        printf("Exception! no value found\n");
    }
}
int pop(){
    //return with delete
    if(top>=0){
        int val=top;
        //How to remove value from memory?
        //stack[top]=NULL;
        top=top-1;
        return stack[val];
    }
    else{
        printf("exception! empty stack");
        return -1;
    }



}
int main(){
    peek();
    pop();
    push(12);
    push(30);
    push(40);
    push(12);
    printf("top of stack for peek %d\n", peek());
    printf("top of stack for pop %d\n", pop());
    printf("top of stack for peek %d\n", peek());
    //value does not remove from memory?
    printf("top+1 stack %d\n", stack[top+1]);


    return 0;
}
