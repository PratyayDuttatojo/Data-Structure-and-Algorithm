#include <stdio.h>
int main() {
    int arr[11], i, pos = 5, num;
    for(i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &num);
    for(i = 10; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos - 1] = num;
    for(i = 0; i < 11; i++)
        printf("%d ", arr[i]);
    return 0;
}
