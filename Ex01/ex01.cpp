#include <iostream>
#include <string>
#include <iomanip>

#include "produtos.hpp"

using namespace std;

int main(){

    int n, condicional;
    cardapio p;

    cout << "         CARDAPIO" << endl  << "--------------------------" << endl << endl;

        cout << "Quantos produtos deseja cadastrar? ";
        cin >> n;

        cout << endl;

        p.leia_produtos(n);

        cout << fixed << setprecision(2) << endl;

        do{

            p.menu(n);
            condicional=p.loop();

            if (condicional!=0){
                p.fechar_pedido();
                cout << "Pressione qualquer tecla para continuar";
                cin.ignore();
                getchar();
            }

            cout << endl;

        }while(condicional!=0);

    return 0;
}
