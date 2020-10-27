#include <iostream>

#include "polinomio.hpp"

using namespace std;

int main(){

    polinomio p;
    int termos;

    cout << "       POLINOMIOS" << endl << "--------------------------" << endl << endl;

    cout << "Quantos termos deseja ler? ";
    cin >> termos;

    p.leituraTermos(termos);
    p.apresentacaoSemConta(termos);

    cout << endl << endl << "Para x = " << p.base() << endl;

    p.apresentacaoComBase(termos);

    cout << " = " << p.contaDeFato(termos) << endl;

    return 0;
}
