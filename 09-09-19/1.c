#include<stdio.h>
void fun()
{
    printf("Hello World\n");
    fun();
}
int main()
{
    fun(1);
    printf("Exit\n");
}
