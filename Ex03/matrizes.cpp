#include <iostream>
#include "matrizes.hpp"

using namespace std;

void matrizes::mostrarMatrizes(){

    cout << "Matriz 1:" << endl << endl;
    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++)
            cout << mat1[i][j] << " ";
            cout << endl;
    }

    cout << endl << "Matriz 2:" << endl << endl;
    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++)
            cout << mat2[i][j] << " ";
            cout << endl;
    }
}

void matrizes::guardarMatrizes(){

    for(i=0; i<tam; i++) {
        for(j=0; j<tam; j++){
            cout << "Primeira matriz [" << i << "][" << j << "]: ";
            cin >> mat1[i][j];
        }
    }

    cout << endl;

    for(i=0; i<tam; i++) {
        for(j=0; j<tam; j++){
            cout << "Segunda matriz [" << i << "][" << j << "]: ";
            cin >> mat2[i][j];
        }
    }
}

void matrizes::recebeTamanho(float aux){

    tam=aux;
}

void matrizes::soma(){

    for(i=0; i<tam; i++)
        for(j=0; j<tam; j++)
            mat3[i][j] = mat1[i][j] + mat2[i][j];

    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++)
            cout << mat3[i][j] << " ";

        cout << endl;
    }
}

void matrizes::multiplicacao(){

    for(i=0; i<tam; i++)
        for(j=0; j<tam; j++)
            mat3[i][j] = mat1[i][j] * mat2[i][j];

    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++)
            cout << mat3[i][j] << " ";

        cout << endl;
    }
}
