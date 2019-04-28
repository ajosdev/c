
#include <stdio.h>

void method16()
{
    FILE *arq;

    char linha[100] = {};
    int array[100] = {};
    int x = 0;

    arq = fopen("arranjo.txt", "rt");

    if (arq == NULL)
    {
        printf("ERRO: Arquivo nao encontrado.");
    }

    int i = 0;
    while (!feof(arq))
    {
        fgets(linha, 100, arq);
        array[i] = atoi(linha);
        i++;
    }
    fclose(arq);

    for (x = 0; x < i; x++)
    {
        if (array[x] > 5)
        {
            FILE *maior = fopen("maior.txt", "wt");
            fprintf(maior, "%d\n", array[x]);
        }
        else
        {
            FILE *menor = fopen("menor.txt", "wt");
            fprintf(menor, "%d\n", array[x]);
        }
    }
}
