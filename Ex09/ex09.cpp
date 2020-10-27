#include <iostream>
#include <string>
#include "presenca.hpp"

using namespace std;

int main(){

    presenca p;
    int menu;

    cout << "      LISTA DE PRESENCA" << endl  << "----------------------------" << endl << endl;

    do{
        p.menu();
        p.escolha();
        menu=p.var();
    }while(menu!=0);

    return 0;
}
