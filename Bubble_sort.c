#include <stdio.h>
void bubblesort(int array[], int size) {
    int step, i;
    for (step = 0; step < size - 1; step++) {
        for (i = 0; i < size-1; i++) {
            if (array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}
int main() {
    int data[] = {5, 9, 8, 7, 2, 0, 4, 1, 3, 6};
    int size = sizeof(data) / sizeof(data[0]);
    bubblesort(data, size);
    printf("Sorted array : \n\n");
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}

