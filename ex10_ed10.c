#include "io.h"

int **lerMatrizDeArquivo(char endereco[], int l, int c)
{
    int **matriz = (int **)malloc(sizeof(int *) * l);
    int i;
    for (i = 0; i < c; i++)
    {
        matriz[i] = (int *)malloc(sizeof(int *) * c);
    }

    FILE *arq = fopen(endereco, "r");

    while (!feof(arq))
    {
        for (i = 0; i < l; i++)
        {
            for (int j = 0; j < c; j++)
            {
                fscanf(arq, "%d", &matriz[i][j]);
            }
        }
    }

    return matriz;
}

bool compararMatriz(int **matriz1, int **matriz2, int l, int c)
{
    int cont = 0;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (*(*(matriz1 + i) + j) == *(*(matriz2 + i) + j))
            {
                cont++;
            }
        }
    }
    if (cont == (l * c))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

void main()
{
    int **matriz1, **matriz2;
    matriz1 = lerMatrizDeArquivo("matriz1.txt", 3, 3);
    matriz2 = lerMatrizDeArquivo("matriz2.txt", 3, 3);

    if (compararMatriz(matriz1, matriz2, 3, 3))
    {
        printf("Matrizes iguais.");
    }
    else
    {
        printf("Matrizes diferentes.");
    }

    /*
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d: %p\n", *(*(matriz2 + i) + j), (*(matriz2 + i) + j));
        }
    }
    */
}
