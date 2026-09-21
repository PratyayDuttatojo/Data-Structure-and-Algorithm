#include <stdio.h>

void insertElement(int a[], int n, int pos, int value)
{
    int i;

    for(i = n; i >= pos; i--)
        a[i] = a[i - 1];

    a[pos - 1] = value;

    for(i = 0; i <= n; i++)
        printf("%d ", a[i]);
}

int main()
{
    int a[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos = 3;
    int value = 25;

    insertElement(a, n, pos, value);

    return 0;
}
