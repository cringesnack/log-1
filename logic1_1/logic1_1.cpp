#include <stdio.h>

int main(void)
{
    int a[10] = { 5, 12, 3, 20, 8, 7, 15, 2, 10, 6 };
    int i;
    int min, max;
    int difference;

    min = a[0];
    max = a[0];

    for (i = 1; i < 10; i++)
    {
        if (a[i] < min)
            min = a[i];

        if (a[i] > max)
            max = a[i];
    }

    difference = max - min;

    printf("min element: %d\n", min);
    printf("max element: %d\n", max);
    printf("difference: %d\n", difference);

    return 0;
}