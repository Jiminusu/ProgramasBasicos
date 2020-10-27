#include <iostream>
#include <string>

using namespace std;

#include "produtos.hpp"

void cardapio::leia_produtos(int n){

    for (i=0; i<n;i++){

        cout << "Cadastre um produto ao cardapio: ";
        cin.ignore();
        getline( cin, produto[i]);

        cout << "Digite o valor do produto: ";
        cin >> valor[i];

        cout << endl;
    }
}

void cardapio::fechar_pedido(){

    cout << "Quantos " << produto[pedido-1] << "? ";
    cin >> qtd;

    cout << endl << endl << "--------------------------" << endl << "        Total do pedido " << endl;
    cout << qtd << " " << produto[pedido-1] << endl;
    cout << "Total a pagar: " << qtd*valor[pedido-1] << endl << "--------------------------" << endl;
}

int cardapio::loop(){

    return pedido;
}
