#include <stdio.h>

void insertionSort(int array[], int size)
{
    int step;
	for (step = 1; step < size; step++)
    {
        int temp = array[step];
        int j = step - 1;

        while (j >= 0 && temp < array[j])
        {
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = temp;
    }
}

int main()
{
    int data[] = {3, 7, 1, 9, 4, 8, 6, 2};
    int size = sizeof(data) / sizeof(data[0]);

    insertionSort(data, size);

    printf("Sorted Array: ");
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", data[i]);
    }

    return 0;
}
