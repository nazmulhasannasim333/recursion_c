#include <stdio.h>

void function1(int i, int n)
{
    if (i > n)
        return;
    function1(i + 1, n);
    printf("%d\n", i);
}

int main()
{
    int n;
    scanf("%d", &n);
    function1(1, n);
    return 0;
}