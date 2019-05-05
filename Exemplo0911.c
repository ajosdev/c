#include <stdio.h>
#include <stdlib.h>

int *criaMatriz(int linhas, int colunas)
{
    int l = 0;
    int c = 0;

    int matriz[linhas][colunas];

    for (l = 0; l < linhas; l++)
    {
        for (c = 0; c < colunas; c++)
        {
            printf("[%d][%d]: ", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }

    int *p = &matriz[0][0];
    return p;
}

int main()
{
    int linhas = 3;
    int colunas = 2;
    int i;

    int *ptr = criaMatriz(linhas, colunas);

    for (i = 0; i < linhas * colunas; i++)
    {
        printf("%d\n", *(ptr + i));
    }
    return 0;
}
