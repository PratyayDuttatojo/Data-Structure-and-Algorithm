#include <stdio.h>

int linearSearch(int arr[], int n, int key, int i)
{
    if (i >= n)
        return -1;

    if (arr[i] == key)
        return i;

    return linearSearch(arr, n, key, i + 1);
}

int main()
{
    int data[] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int key = 50;

    int result = linearSearch(data, n, key, 0);

    if (result != -1)
        printf("Found at index %d\n", result);
    else
        printf("Not found\n");

    return 0;
}
