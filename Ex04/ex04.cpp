#include <iostream>
#include <string>
#include <iomanip>

#include "lista.hpp"

#define _MAX_  100

using namespace std;
typedef float TInfo;

int main(){

    Lista l;
    int qtd, i, cont;
    float valor;

    cout << "   MEDIA SEM AS PONTAS" << endl << "--------------------------" << endl << endl;

    cout << "Escreva até 100 numeros ou digite 0 para terminar a qualquer momento" << endl << endl << endl;

    do{
        cout << "Insira um numero: ";
        cin >> valor;

        l.inserirOrdenado(valor);

    }while (valor!=0);

    cont = l.obterQtd();

    cout << endl << "Numeros ordenados: ";

    for (i=0; i<cont; i++){
        cout << l.obterElemento(i) << " ";
    }

    cout << endl << "Seus extremos: " << l.obterElemento(0) << " no inicio; " << l.obterElemento(cont-1) << " no final" << endl;

    l.removerNoInicio();
    l.removerNoFinal();

    cout << endl;

    cont = l.obterQtd();

    cout << "Numeros sem os extremos: ";

    for (i=0; i<cont; i++){
        cout << l.obterElemento(i) << " ";
    }

    cout << endl;

    cout << fixed << setprecision(2) << "Media dos valores sem os valores extremos: " << l.somaMedia() / l.obterQtd() << endl;

    return 0;
}
