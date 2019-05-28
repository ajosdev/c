#include "io.h"

int *vetor(int n)
{
    int i;
    int *array = (int *)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
    {
        array[i] = i;
    }
    return array;
}

void main()
{
    int *ptr = vetor(5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d: %p\n", *(ptr + i), (ptr + i));
    }
}
