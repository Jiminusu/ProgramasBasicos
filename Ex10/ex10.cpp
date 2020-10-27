#include <iostream>
#include <string>
#include "forca.cpp"

using namespace std;

int main(){

    forca f;
    string n;

    system("clear || cls");

    cout << "      JOGO DA FORCA" << endl  << "----------------------------" << endl << endl;

    cout << "Digite a frase secreta: ";
    getline(cin, n);

    for (size_t i = 0 ; i < n.size() ; ++i){
        char character = tolower(n[i]);
        n[i] = character;
    }

    f.secreta(n);
    f.converterTracos();
    f.jogo();

    return 0;
}
