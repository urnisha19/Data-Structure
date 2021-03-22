#include<stdio.h>
int queue[20],front=-1,rear=-1,size=5;
void add()
{
    if((front == 0 && rear == size-1) || (rear == front-1))
    {
        printf("Queue is full\n");
        return;
    }
    int item;
    printf("Enter an item to add: ");
    scanf("%d",&item);
    if(front == -1 && rear == -1)
    {
        front++;
        rear++;
        queue[rear]=item;
    }
    else if(rear == size-1)
    {
        rear=0;
        queue[rear]=item;
    }
    else
    {
        rear++;
        queue[rear]=item;
    }
}
void del()
{
    if(front == -1)
    {
        printf("Queue is empty\n");
        return;
    }
    int item;
    item=queue[front];
    if(front == rear)
    {
        front=rear=-1;
    }
    else if(front == size-1)
    {
        front=0;
    }
    else
    {
        front++;
    }
    printf("delete-> %d\n",item);
}
void display()
{
    int i;
    printf("Queue: ");
    if(rear>=front)
    {
        for(i=front; i<=rear; i++)
            printf("%d ",queue[i]);
    }
    else
    {
        for(i=front; i<size; i++)
            printf("%d ",queue[i]);
        for(i=0; i<=rear; i++)
            printf("%d ",queue[i]);
    }
    printf("\n");
}
int main()
{
    int choice;
    printf("Enter your choice 1:PUSH, 2:POP, 3:Display\n");
    while(scanf("%d", &choice))
    {
        if(choice == 1)
            add();
        else if(choice == 2)
            del();
        else if(choice == 3)
            display();
        else
            printf("Wrong input\n");
    }
    return 0;
}
