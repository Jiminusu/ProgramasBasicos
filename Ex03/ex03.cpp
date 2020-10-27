#include <iostream>
#include "matrizes.hpp"

using namespace std;

int main() {

    matrizes m;
    float n;

    cout << "        SOMA E MULTIPLICACAO DE MATRIZES" << endl  << "-------------------------------------------------" << endl << endl;

    cout << "Defina o tamanho: ";
    cin >> n;

    cout << endl;

    m.recebeTamanho(n);
    m.guardarMatrizes();

    system("clear || cls");

    m.mostrarMatrizes();

    cout << endl << "A soma das matrizes é igual a:" << endl << endl;
    m.soma();

    cout << endl << "A multiplicacao das matrizes é igual a:" << endl << endl;
    m.multiplicacao();

  return 0;
}
