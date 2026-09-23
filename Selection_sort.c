#include <stdio.h>

void selectionSort(int array[], int size)
{
    int step;
	for (step = 0; step < size - 1; step++)
    {
        int min_idx = step;

        int i;
		for (i = step + 1; i < size; i++)
        {
            if (array[i] < array[min_idx])
            {
                min_idx = i;
            }
        }

        int temp = array[min_idx];
        array[min_idx] = array[step];
        array[step] = temp;
    }
}

int main()
{
    int data[] = {3, 7, 1, 9, 4, 8, 6, 2};
    int size = sizeof(data) / sizeof(data[0]);

    selectionSort(data, size);

    printf("Sorted Array: ");
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", data[i]);
    }

    return 0;
}
