#include <stdio.h>

void deleteElement(int a[], int n, int pos)
{
    int i;

    for(i = pos; i < n - 1; i++)
        a[i] = a[i + 1];

    for(i = 0; i < n - 1; i++)
        printf("%d ", a[i]);
}

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos = 2;

    deleteElement(a, n, pos - 1);

    return 0;
}
