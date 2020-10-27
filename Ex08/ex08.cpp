#include <iostream>

#include "lista.hpp"

#define MAX  5

using namespace std;

int main(){

    Lista l;
    float valor;

    cout << "   LISTA DE PARES E IMPARES" << endl << "--------------------------" << endl << endl;

    cout << "Escreva numeros reais ou digite 0 para terminar a qualquer momento" << endl << endl << endl;

    do{
        cout << "Insira um numero: ";
        cin >> valor;

        if(valor!=0){
            l.inserir(valor);
            l.mostrar();
        }

    }while (valor!=0);

    l.mostrarTudo();

    return 0;
}
