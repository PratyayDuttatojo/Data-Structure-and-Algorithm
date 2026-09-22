#include <stdio.h>

void array(int b, int w, int i, int m, int r0, int rn, int j, int lc, int choice)
{
    int result = 0;

    switch(choice)
    {
        case 1:
            result = b + w * ((i - r0) * m + (j - lc));
            printf("row major: %d", result);
            break;

        case 2:
            result = b + w * ((j - lc) * m + (i - r0));
            printf("column major: %d", result);
            break;

        default:
            printf("Invalid choice");
            break;
    }
}

int main()
{
    int b, w, i, r0, j, lc, choice;
    int n = 4;
    int m = 4;

    int a[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    printf("Enter Base Address(b):");
    scanf("%d", &b);

    printf("Enter Data Width(w):");
    scanf("%d", &w);

    printf("Enter the Lower Bound of Rows(r0):");
    scanf("%d", &r0);

    printf("Enter the Lower Bound of Columns(lc):");
    scanf("%d", &lc);

    printf("Enter Row Index(i):");
    scanf("%d", &i);

    printf("Enter Column Index(j):");
    scanf("%d", &j);

    printf("Enter choice(1 row 2):");
    scanf("%d", &choice);

    array(b, w, i, m, r0, n, j, lc, choice);

    return 0;
}
