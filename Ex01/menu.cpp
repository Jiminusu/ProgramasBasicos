#include <iostream>

#include "produtos.hpp"

using namespace std;

void cardapio::menu(int n){

    do{
        cout << "              MENU" << endl;

        for (i=0; i<n;i++)
            cout << i+1 << "- " << produto[i] << " R$ " << valor[i] << endl;
        cout << "0- Sair" << endl << endl;

        cout << "Escolha seu pedido pelo numero: ";
        cin >> pedido;

        cout << endl;
    }while (pedido>n and pedido!=0);
}
