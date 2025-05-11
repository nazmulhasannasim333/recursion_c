#include <stdio.h>
void fun2()
{
    printf("Function 2\n");
}

void fun1()
{
    printf("Function 1\n");
    fun2();
}

int main()
{
    printf("Hello, World!\n");
    fun1();
    return 0;
}