#include<stdio.h>
int main()
{
    int data[100],n,k,loc,max;
    scanf("%d",&n);
    for(k=0; k<n; k++)
    {
        scanf("%d", &data[k]);
        loc=0;
        max=data[0];
    }
    for(k=0; k<n; k++)
    {
        if(max<data[k])
        {
            max=data[k];
            loc=k;
        }
    }
    printf("%d largest element found at position %d",max,loc);
    return 0;
}
