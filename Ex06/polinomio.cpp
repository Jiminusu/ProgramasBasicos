#include <iostream>
#include <math.h>

#include "polinomio.hpp"

using namespace std;

polinomio::polinomio(){
   x=0;
}

float polinomio::contaDeFato(int aux){

    for(i=0; i<aux; i++){
        potencia[i] = pow (x, exp[i]);
        baixo[i]=coef[i]*potencia[i];
        resul = resul+baixo[i];
    }
    return resul;
}

void polinomio::apresentacaoComBase(int aux){

    cout << "P(" << x << ") = " << coef[0] << "*" << pow (x, exp[0]);
    for(i=1; i<aux; i++){
        if (coef[i]>=0)
            cout << " + " << coef[i] << "*" << pow (x, exp[i]);
        else
            cout << " - " << coef[i]*-1 << "*" << pow (x, exp[i]);
    }
}

float polinomio::base(){
   return x;
}

void polinomio::apresentacaoSemConta(int aux){

    cout << endl << "P = " << coef[0] << "X^" << exp[0];
    for(i=1; i<aux; i++){
        if (coef[i]>=0)
            cout << " + " << coef[i] << "X^" << exp[i];
        else
            cout << " - " << coef[i]*-1 << "X^" << exp[i];
    }
}

void polinomio::leituraTermos(int aux){

    for(int i=0; i<aux; i++){
        cout << endl << "Termo " << i+1 << " de " << aux << endl;
        cout << "Coeficiente: ";
        cin >> coef[i];
        cout << "Expoente: ";
        cin >> exp[i];
    }

    cout << endl << "Valor de X: ";
    cin >> x;
}
