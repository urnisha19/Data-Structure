#include<stdio.h>
int stack[20],top=0,maxstk=8;
void push()
{
    if(top == maxstk)
    {
        printf("Stack is full\n");
        return;
    }
    int item;
    printf("Enter an item to push: ");
    scanf("%d",&item);
    top++;
    stack[top]=item;
}
void pop()
{
    if(top==0)
    {
        printf("Stack is empty\n");
        return;
    }
    int item;
    item=stack[top];
    top--;
    printf("pop->%d\n",item);
}
void display()
{
    int i;
    printf("Stack: ");
    for(i=1; i<=top; i++)
    {
        printf("%d ",stack[i]);
    }
    printf("\n");
}
int main()
{
    int choice;
    printf("Enter your choice 1:PUSH, 2:POP, 3:DISPLAY\n");
    while(scanf("%d",&choice))
    {
        if(choice == 1)
            push();
        else if(choice == 2)
            pop();
        else if(choice == 3)
            display();
        else
            prinrf("Wrong input\n");
    }
    return 0;
}
