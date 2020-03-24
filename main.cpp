#include <iostream>
#include "math_tools.h"
#include "display_tools.h"

using namespace std;

int main(void)
{
    Matrix invert, invers;
    int n;
    cout << "Ingrese dimension cuadrada" << endl;
    cin >> n;
    //inicializo en cero
    zeroes(invert, n);

    float valor;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Ingrese valor" << endl;
            cin >> valor;
            invert.at(i).at(j) = valor;
        }
    }

    inversa(invert, invers);
    showMatrix(invers);
    cout << "adios" << endl;

    return 0;
}