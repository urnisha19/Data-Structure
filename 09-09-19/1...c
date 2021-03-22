#include<stdio.h>
void fun(int i)
{
    if(i<5)
        return;
    printf("Hello World\n");
    fun(i+1);
}
int main()
{
    fun(1);
    printf("Exit\n");
}
