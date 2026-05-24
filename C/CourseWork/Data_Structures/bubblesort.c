// #include<stdio.h>
// #define MAX 5
// int stack[MAX];
// int top = -1;
// void push(int value){
//     if(top == MAX -1){
//         printf("Stack Overflow\n");
//     }
//     else{
//         top++;
//         stack[top] = value;
//     }
// }

// void pop(){
//     if (top == -1){
//         printf("Stack Underflow\n");
//     }
//     else{
//         top--;
//     }
// }
// void display(){
//     if (top == -1){
//         printf("Stack is empty\n");
//     }
//     else{
//         printf("Stack elements: ");
//         for(int i = top; i >= 0; i--){
//             printf("%d ", stack[i]);
//         }
//         printf("\n");
//     }
// }

// int main(){
//     push(10);
//     push(20);
//     push(30);
//     display();
//     pop();
//     display();
//     return 0;
// }
#include<stdio.h>
#define MAX 5
int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int value  ){
    if(rear == MAX -1){
        printf("Queue Overflow\n");
    }
    else{
        if(front == -1){
            front = 0;
        }
        rear++;
        queue[rear] = value;
    }
}
void dequeue(){
    if(front == -1 || front > rear){
        printf("Queue Underflow\n");
    }
    else{
        front++;
    }
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
}