#include <conio.h>
#include <stdio.h>
#include <stdbool.h>
#define MAX 5
int s[0], TOP = -1 , i,item, ch;
bool b;
void push(); int pop(); void display(); bool isEmpty(); bool isFull();
void main(){

    while(1){
        printf("1.PUSH\n 2.POP\n, 3.Display\n 4.Is Empty\n 5.Is Full\n 6.Exit");
        printf("Enter your choice");
        scanf("%d", &ch);
        switch(ch){
            case 1: push();break;
            case 2: item = pop();
                    if(item!=-1){
                        printf("Popped Element is %d\n",item);
                    } break;

            case 3: display(); break;
            case 4: b=isEmpty();
                    if (b==1){
                        printf("Yes its Empty");
                    }
                    else{
                        printf("No its Not Empty");
                    }break;
            case 5: b=isFull();
                    if(b==0){
                        printf("Yes its Full");
                    }
                    else{
                        printf("Not Full");
                    }break;
            case 6: printf("Exitting the Program"); break;
        }

    }
        getch();
}

void push(){
    if(TOP==MAX-1){
        printf("STACK OVERFLOW!");
        return;
    }
    printf("Enter the Element to be Pushed");
    scanf("%d", &item);
    TOP = TOP+1;
    s[TOP] = item;
}

int pop(){
    if (TOP==-1){
        printf("Stack Underflow!");
        return -1;
    }
    item = s[TOP];
    TOP = TOP-1;
    return item;
}

void display(){
    if (TOP==-1){
        printf("Stack is Empty");
        return;
    }
    printf("Stack Contains:\n");
    for (i=TOP; i>=0; i--){
        printf("%d",s[i]);
    }
}
bool isEmpty(){
    return (TOP ==-1);
}
bool isFull(){
    return (TOP == MAX-1);
}
