#include<stdio.h>
int main()
{
    int i,j,arr[100],n,min_loc,temp;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        min_loc=i;
        for(j=i+1; j<n; j++)
        {
            if(arr[j]<arr[min_loc])
            {
                min_loc=j;
            }
        }
        if(min_loc!=i)
        {
            temp=arr[i];
            arr[i]=arr[min_loc];
            arr[min_loc]=temp;
        }
    }
    printf("After Sorting:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
