#include<stdio.h>
union person
{
    char name[50];
    double CGPA;
    int batch;
} p[40];
int main()
{
    int i,n;
    double average,sum=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s %lf %d", &p[i].name,&p[i].CGPA,&p[i].batch);
    }
    for(i=0; i<n; i++)
    {
        sum+=p[i].CGPA;
    }
    average=sum/n;
    printf("Average = %.2lf",average);
    return 0;
}

