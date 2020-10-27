#include <iostream>
#include "lista.hpp"

#define MAX 5

using namespace std;

Lista::Lista()
{
   qtdp=0;
   qtdi=0;
}

void Lista::mostrar(){

    if(qtdp==5){
        cout << endl << "-------------------" << endl << "5 ultimos pares: ";
        for(i=0; i<5; i++)
            cout << par[i] << " ";
            qtdp=0;
        cout << endl << "-------------------" << endl << endl;
    }
    if(qtdi==5){
        cout << endl << "-------------------" << endl << "5 ultimos impares: ";
        for(i=0; i<5; i++)
            cout << impar[i] << " ";
            qtdi=0;
        cout << endl << "-------------------"  << endl << endl;
    }
}

void Lista::inserir(int n){

    if(n % 2==0){
        par[qtdp]=n;
        qtdp++;
    }

    else{
        impar[qtdi]=n;
        qtdi++;
    }
}

void Lista::mostrarTudo(){

    cout << endl << "-------------------" << endl << "Impares restantes: ";

    for(i=0; i<qtdi; i++)
        cout << impar[i] << " ";

    cout << endl << endl << "Pares restantes: ";

    for(i=0; i<qtdp; i++)
        cout << par[i] << " ";
    cout << endl << "-------------------" << endl;

}
