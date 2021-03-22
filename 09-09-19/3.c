#include<stdio.h>
long long fibo(int n)
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n;
    scanf("%d",&n);
    long long fibonacci=fibo(n);
    printf("%dth term = %lld\n",n,fibonacci);
}
