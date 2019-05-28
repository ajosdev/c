#include "io.h"

int **alocMatriz(int l, int c)
{
    int i, cont = 0;
    int **matriz = (int **)malloc(l * sizeof(int *));
    for (i = 0; i < l; i++)
    {
        matriz[i] = (int *)malloc(c * sizeof(int *));
    }
    for (i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matriz[i][j] = cont;
            cont++;
        }
    }
    return matriz;
}

void main()
{
    int linhas, colunas = 0;

    printf("linhas :");
    scanf("%d", &linhas);
    printf("colunas :");
    scanf("%d", &colunas);

    int **ptr;
    ptr = alocMatriz(linhas, colunas);
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d: %p\n", *(*(ptr + i) + j), (*(ptr + i) + j));
        }
    }
}
