#include<stdio.h>
void selection_sort(int arr[],int n)
{
    int i,j,min_loc,temp;
    for(i=0; i<n; i++)
    {
        min_loc=i;
        for(j=i+1; j<n; j++)
        {
            if(arr[j]<arr[min_loc])
                min_loc=j;
        }
        temp=arr[i];
        arr[i]=arr[min_loc];
        arr[min_loc]=temp;
    }
}
int main()
{
    int i,n,arr[100];
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    selection_sort(arr,n);
    printf("After Sorting:\n");
    for(i=0; i<n; i++)
        printf("%d ",arr[i]);
    return 0;
}
