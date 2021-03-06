/*
myarray.h - v0.0. - __ / __ / _____
Author: ______________________
*/
// ----------------------------------------------- definicoes globais
#define _NYARRAY_H_
#define _MYARRAY_H_
// dependencias
#include <iostream>
using std::cin;  // para entrada
using std::cout; // para saida
using std::endl; // para mudar de linha
#include <iomanip>
using std::setw; // para definir espacamento
#include <string>
using std::string; // para cadeia de caracteres
#include <fstream>
using std::ifstream; // para ler arquivo
using std::ofstream; // para gravar arquivo
template <typename T>
class Array
{
private: // area reservada
    int length;
    T *data;

public: // area aberta
    Array(int n)
    {
        // definir valor inicial
        length = n;
        // reservar area
        data = new T[length];
    } // end constructor
    void free()
    {
        if (data != NULL)
        {
            delete (data);
            data = NULL;
        } // end if
    }     // end free ( )
    void set(int position, T value)
    {
        if (0 <= position && position <= length)
        {
            data[position] = value;
        } // end if } // end set ( )
        T get(int position)
        {
            T value = 0; // return value has type dependency
            if (0 <= position && position <= length)
            {
                value = data[position];
            } // end if
            return (value);
        } // end get ( )
        void print()
        {
            cout << endl;
            for (int x = 0; x < length; x = x + 1)
            {
                cout << setw(3) << x << " : "
                     << setw(9) << data[x]
                     << endl;
            } // end for
            cout << endl;
        } // end print ( )
    }
};
