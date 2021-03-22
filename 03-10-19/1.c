#include<stdio.h>
int main()
{
    int i,j,k,a1[10],a2[10],temp[20],n1,n2;
    scanf("%d",&n1);
    for(i=0; i<n1; i++)
    {
        scanf("%d",&a1[i]);
    }
    scanf("%d",&n2);
    for(j=0; j<n2; j++)
    {
        scanf("%d",&a2[j]);
    }
    i=j=k=0;
    while(i<=n1-1 && j<=n2-1)
    {
        if(a1[i]<a2[j])
        {
            temp[k]=a1[i];
            i++,k++;
        }
        if(a2[j]<a1[i])
        {
            temp[k]=a2[j];
            j++,k++;
        }
    }
    while(i<=n1-1)
    {
        temp[k]=a1[i];
        i++,k++;
    }
    while(j<=n2-1)
    {
        temp[k]=a2[j];
        j++,k++;
    }
    printf("After sorting:\n");
    for(k=0; k<(n1+n2); k++)
    {
        printf("%d ",temp[k]);
    }
    return 0;
}
