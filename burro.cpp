#include <iostream>

using namespace std;

class Arranjo
{
public:
    int n = 0;
    int array[];
    void gerarInt(int n, int inferior, int superior);
};

int main()
{
    Arranjo *arranjo = new Arranjo();
    cout << endl
         << "Quantidade de numeros: \n";
    cin >> arranjo->n;
    arranjo->gerarInt(arranjo->n, 0, 100);

    for (int i = 0; i < arranjo->n; i++)
    {
        cout << arranjo->array[i] << endl;
    }
    return 0;
}

void Arranjo::gerarInt(int n, int inferior, int superior)
{
    array[n];
    for (int i = 0; i < n; i++)
    {
        array[i] = inferior + (rand() % (superior - inferior));
    }
}
