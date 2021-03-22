#include<stdio.h>
long long fact(long long n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    long long factorial=fact(n);
    printf("%d! = %lld\n",n,factorial);
}
