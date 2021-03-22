#include<stdio.h>
int main()
{
    int i,arr[100],n,position,value;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&position,&value);
    for(i=position+1; i<=n-1; i++)
    {
        arr[i-1]=arr[i];
    }
    //arr[position]=value;
    for(i=0; i<n-1; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
