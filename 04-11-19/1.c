#include<stdio.h>
int queue[20],front=-1,rear=-1,size=6;
void add()
{
    if(rear==size-1)
    {
        printf("Queue is full\n");
        return;
    }
    int item;
    printf("Enter an item to add: ");
    scanf("%d",&item);
    if(front==-1)
    {
        front++;
        rear++;
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
     if(front== -1 || front>rear)
    {
        printf("Queue is empty\n");
        return;
    }
    int item;
    item=queue[front];
    front++;
    printf("delete-> %d\n",item);
}
void display()
{
    int i;
    printf("Queue: ");
    for(i=front; i<=rear; i++)
        printf("%d ",queue[i]);
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
