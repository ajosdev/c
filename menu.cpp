#include <iostream>
#include "myarray.hpp"

int main(int argc, char **argv)
{
    // definir dado
    int x = 0; // definir variavel com valor inicial
    // repetir até desejar parar
    do
    {
        // identificar
        cout << "EXEMPLO1101 - Programa - v0.0\n " << endl;
        // mostrar opcoes
        cout << "Opcoes " << endl;
        cout << " 0 - parar " << endl;
        cout << " Exemplo1011" << endl;
        cout << " Exemplo1012 - " << endl;
        cout << " Exemplo1013 - " << endl;
        cout << " Exemplo1014 - " << endl;
        cout << " Exemplo1015 - " << endl;
        cout << " Exemplo1016 - " << endl;
        cout << " Exemplo1017 - " << endl;
        cout << " Exemplo1018 - " << endl;
        cout << " Exemplo1019 - " << endl;
        cout << " Exemplo1020 - " << endl;
        cout << " Exemplo1021 - " << endl;
        cout << " Exemplo1022 - " << endl;
        // ler do teclado
        cout << endl
             << "Entrar com uma opcao: ";
        cin >> x;
        // escolher acao
        switch (x)
        {
        case 0:
            //method00();
            break;
        case 1:
            //method01();
            break;
        case 2:
            //method02();
            break;
        case 3:
            //method03();
            break;
        case 4:
            //method04();
            break;
        case 5:
            //method05();
            break;
        case 6:
            //method06();
            break;
        case 7:
            //method07();
            break;
        case 8:
            //method08();
            break;
        case 9:
            //method09();
            break;
        case 10:
            //method10();
            break;
        default:
            cout << endl
                 << "ERRO: Valor invalido." << endl;
        } // fim escolher
    } while (x != 0);
    // encerrar
    return (0);
}
