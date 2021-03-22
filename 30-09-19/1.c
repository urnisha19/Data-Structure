//Insertion Sort with C
#include<stdio.h>
int main()
{
    int a[100],n,i,temp,ptr;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=1; i<n; i++)//step 1
    {
        temp=a[i];//step 2
        ptr=i-1;//step 2
        while((temp<a[ptr])&&(ptr>=0))//step 3
        {
            a[ptr+1]=a[ptr];//step 3a
            ptr=ptr-1;//step 3b
        }
        a[ptr+1]=temp;//step 4
    }
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
    return 0;
}
