#include <iostream>
#include "conjunto.hpp"

#define MAX 100

using namespace std;

int main(){

    conjunto c;

    int ContU=0, ContI=0, ContD=0, ContA, ContB, aux;
    int UNIAO[2*MAX], DIFERENCA[MAX], INTERSEC[MAX];

    cout << "       CONJUNTOS" << endl << "--------------------------" << endl;

    for (char AB='A';AB<=66;AB++){
        cout << endl << "Quantos numeros deseja inserir no conjunto " << AB << "? ";
        cin >> aux;
        cout << endl;

        c.obterQtd(aux);
        c.leiaConjunto(aux, AB);

        if (AB=='A')
            ContA=aux;
        else
            ContB=aux;
    }

    ContU = c.Uniao(ContA,ContB,UNIAO);
    cout << endl << "Uniao = { ";
    c.Imprime(UNIAO,ContU);
    cout << "}" << endl;


    ContI = c.Intersecao(ContA,ContB,INTERSEC);
    cout << endl << "Intersecao = { ";
    c.Imprime(INTERSEC,ContI);
    cout<<"}" << endl;

    ContD = c.DiferencaA(ContA,ContB,DIFERENCA);
    cout << endl << "A-B = { ";
    c.Imprime(DIFERENCA,ContD);
    cout << "}" << endl;

    ContD = c.DiferencaB(ContB,ContA,DIFERENCA);
    cout << endl << "B-A = { ";
    c.Imprime(DIFERENCA,ContD);
    cout << "}" << endl;

    return 0;
}
