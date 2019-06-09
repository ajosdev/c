#include "myarray.hpp"

int **ler_matriz(const char arquivo[], int linhas, int colunas)
{
    int **matriz = (int **)malloc(linhas * sizeof(int *));
    for (int c = 0; c < colunas; c++)
    {
        matriz[c] = (int *)malloc(colunas * sizeof(int *));
    }
    ifstream arq;
    arq.open(arquivo);
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            arq >> matriz[i][j];
        }
    }
    return matriz;
}

bool verifica_listrada(int **matriz, int linhas, int colunas)
{
    int aux = matriz[0][0];
    int resposta = true;
    int i, j, k;
    for (k = 0; k < (linhas / 2); k++)
    {
        aux = matriz[k][k];
        for (i = k; i < linhas - k; i++)
        {
            for (j = k; j < colunas - k; j++)
            {
                //pega a casca da matriz limitada por k
                if (i == k || i == (linhas - (k + 1)) || j == k || j == (colunas - (k + 1)))
                {
                    if (matriz[i][j] != aux)
                    {
                        resposta = false;
                        break;
                    }
                }
            }
        }
    }
    return resposta;
}

int main(void)
{
    int linhas = 6;
    int colunas = 6;

    int **matriz = ler_matriz("matriz6.txt", linhas, colunas);
    //int *arranjo = verifica_listrada(matriz, linhas, colunas);

    if (verifica_listrada(matriz, linhas, colunas))
    {
        cout << "Listrada" << endl;
    }
    else
    {
        cout << "Nao listrada" << endl;
    }
    return 0;
}
