#include <iostream>
#include "conjunto.hpp"

#define MAX 100

using namespace std;

void conjunto::obterQtd(int aux){

    qtd=aux;
}

void conjunto::leiaConjunto(int n, char AB){

    for (i=0; i<n;i++){
        cout << "Digite o " << i+1 << " numero de " << AB << ": ";
        if(AB=='A')
            cin >> A[i];
        else
            cin >> B[i];
    }
}

void conjunto::Imprime(int conjunto[2*MAX], int Tam){
    for(int i=0;i<Tam;i++)
        cout<<conjunto[i]<<" ";
}

int conjunto::Altera(int conjunto[MAX]){
    int contador=0;
    int valor;
    do{
        cout<<"Digite um valor ou -1 para sair: ";
        cin>>valor;

        if(valor>=0){
            conjunto[contador]=valor;
            contador++;
        }

    }while(valor!=-1 && contador<MAX);

    if(contador==MAX)
        cout<<"\n\nTamanho do conjunto foi atingido!\n\n";

    return contador;
}

bool conjunto::Existe(int valor, int conjunto[2*MAX], int Tam){
    for(int i=0;i<Tam;i++)
        if(conjunto[i]==valor){
            return true;
        }

    return false;
}

int conjunto::Uniao(int ElemA, int ElemB, int ConjU[2*MAX]){
    int TamU;
    for(int i=0;i<ElemA;i++)
        ConjU[i]=A[i];

    TamU=ElemA;

    for(int i=0;i<ElemB;i++)
        if( ! Existe(B[i],ConjU,TamU)){
            ConjU[TamU]=B[i];
            TamU++;
        }

    return TamU;
}

int conjunto::Intersecao(int ElemA, int ElemB, int ConjI[MAX]){
    int ContI=0;
    for(int i=0;i<ElemA;i++)
        if( Existe(A[i],B,ElemB) ){
            ConjI[ContI]=A[i];
            ContI++;
        }

    return ContI;
}

int conjunto::DiferencaA(int ElemA, int ElemB, int ConjD[MAX]){

    int contador=0;
    for(int i=0;i<ElemA;i++)
        if( ! Existe(A[i],B,ElemB) ){
            ConjD[contador] = A[i];
            contador++;
        }

    return contador;
}

int conjunto::DiferencaB(int ElemA, int ElemB, int ConjD[MAX]){

    int contador=0;
    for(int i=0;i<ElemA;i++)
        if( ! Existe(B[i],A,ElemB) ){
            ConjD[contador] = B[i];
            contador++;
        }

    return contador;
}
