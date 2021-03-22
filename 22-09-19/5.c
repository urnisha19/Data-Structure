#include<stdio.h>
int func(int arr[],int n,int value)
{
    int beg,end,mid,location=-1;
    beg=0,end=n-1;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(arr[mid]==value)
        {
            location=mid+1;
            break;
        }
        else if(arr[mid]<value)
            beg=mid+1;
        else if(arr[mid]>value)
            end=mid-1;
    }
    return location;
}
int main()
{
    int arr[100],n,i,value,location=-1;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    scanf("%d",&value);
    location=func(arr,n,value);
    if(location==-1)
        printf("Search unsuccessful\n");
    else
        printf("%d found at position %d\n",value,location);
    return 0;
}
