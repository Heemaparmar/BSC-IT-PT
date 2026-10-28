#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b, result;

    printf("Enter two values: ");
    scanf("%d %d", &a, &b);

    result = sum(a, b);

    printf("Addition = %d", result);

    return 0;
}