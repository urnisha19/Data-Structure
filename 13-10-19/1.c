#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *root=NULL;
void append()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter The Data: ");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(root==NULL)
        root=temp;
    else
    {
        struct node *p;
        p=root;
        while(p->next != NULL)
            p=p->next;
        p->next=temp;
    }
}
void display()
{
    struct node *p;
    p=root;
    while(1)
    {
        printf("%d\n",p->data);
        if(p->next == NULL)
            break;
        else
            p=p->next;
    }
}
int main()
{
    append();
    append();
    display();
    return 0;
}
