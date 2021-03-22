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
    int len=0;
    p=root;
    while(1)
    {
        len++;
        if(p->next == NULL)
            break;
        else
            p=p->next;
    }
    printf("Length = %d\n",len);
}
int main()
{
    append();
    append();
    append();
    display();
    return 0;
}
