#include<stdio.h>
int main()
{
    int arr[100],n,i,beg,end,mid,value,location=-1;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    scanf("%d",&value);
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
    if(location==-1)
        printf("Search unsuccessful\n");
    else
        printf("%d found at position %d\n",value,location);
    return 0;
}
