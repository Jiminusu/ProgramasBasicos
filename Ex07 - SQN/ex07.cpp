#include <iostream>
#include <string>
#include "caracteres.cpp"

using namespace std;

int main(){

    caracteres c;
    string expressao;

    cout << "          VALIDADOR DE EXPRESSOES MATEMATICAS" << endl  << "--------------------------------------------------------" << endl << endl;

    cout << "Digite a expressao matematica que deseja validar: ";
    getline(cin, expressao);


    c.validador(expressao);
    c.acharCaracteres();

    return 0;
}
