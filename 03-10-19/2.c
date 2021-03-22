#include<stdio.h>
int a[100];
void merge(int s,int e)
{
    int mid = (s+e)/2;
    int i = s;
    int j = mid+1;
    int k = s;
    int temp[100];

    while(i<=mid && j<=e)
    {
        if(a[i]<a[j])
        {
            temp[k]=a[i];
            k++,i++;
        }
        else
        {
            temp[k]=a[j];
            k++,j++;
        }
    }
    while(i<=mid)
    {
        temp[k++]=a[i++];
    }
    while(j<=e)
    {
        temp[k++]=a[j++];
    }
    //we need to copy all element to original arrays
    for(i=s; i<=e; i++)
    {
        a[i]=temp[i];
    }
}
void mergeSort(int s,int e)
{
    //base case- 1 or 0 elements
    if(s<e)
    {
        //follow 3 steps
        //1.Divide
        int mid = (s+e)/2;
        //2.Recursively the arrays-s,mid and mid+1,e
        mergeSort(s,mid);
        mergeSort(mid+1,e);
        //3.Merge the two parts
        merge(s,e);
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    mergeSort(0,n-1);
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
