/*
Anderson Junio de Oliveira Silva

speedup: 0.0026
*/

#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

long double valor_absoluto(long double n)
{
    if (n < 0)
    {
        n *= (-1);
    }
    return n;
}

long double pi(long double precisao)
{
    long double diferenca = 1;
    long double termo_anterior = 0;
    long double pi = 0;
double start = omp_get_wtime();
    for (int i = 0; diferenca > precisao; i++)
    {
        int denominador = 2 * i + 1;
        if (i % 2 != 0)
        {
            denominador = (-1) * denominador;
        }
        long double termo = 4 / (long double)denominador;
        if (termo_anterior > 0)
        {
            diferenca = valor_absoluto(termo_anterior) - valor_absoluto(termo);
        }
        termo_anterior = termo;
        pi += termo;
    }
    double end = omp_get_wtime();
    printf("time: %f \n", end-start);
    return pi;
}

int main()
{
    long double precisao = 0.000000001;
    //char resposta;
    // printf("Deseja inserir um valor de precisao (y/n): ");
    // scanf("%c", &resposta);
    // if (resposta == 'y' || resposta == 's')
    // {
    //     printf("Insira o valor desejado (ex: 0.00001): ");
    //     scanf("%Lf", &precisao);
    // }
    printf("%.15Lf \n", pi(precisao));
    return 0;
}
