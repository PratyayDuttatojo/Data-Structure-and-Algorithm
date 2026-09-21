#include <stdio.h>

void fibonacci(int n, int a, int b)
{
    if (n <= 0)
    {
        return;
    }

    printf("%d ", a);
    fibonacci(n - 1, b, a + b);
}

int main()
{
    int limit;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    fibonacci(limit, 0, 1);

    return 0;
}
