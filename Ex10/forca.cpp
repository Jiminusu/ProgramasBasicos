#include <iostream>
#include <string>
#include "forca.hpp"

using namespace std;

void forca::pause(){

    system("read -p \"\nPressione qualquer tecla para sair\" saindo");
}

forca::forca(){

    pod=0;
    cont=5;
    chute[0]=0;
    go=cont+adivinha.length();
}

void forca::secreta(string n) {

    adivinha=n;
    palavra=n;
}

void forca::acharLetra(){

    bool achou=false;
    int pos=0;

    while(pos<palavra.length()){
        if (chute[0] == adivinha[pos]){
            palavra[pos]=adivinha[pos];
            achou = true;
        }pos++;
    }
    if (!achou){
        cont--;
        if(cont==0){
            system("clear || cls");
            cout << endl << endl << "Voce perdeu :(" << endl << "A frase era: " << adivinha << endl << endl;
            pause();
        }
    }
}

void forca::converterTracos(){

    for ( int i = 0; i < palavra.length(); i++)
        if (palavra[i] >= 65 && palavra[i] <= 90 || palavra[i] >= 97 && palavra[i] <= 122 )
            palavra[i] = '_';

    system("clear || cls");
}

void forca::ganhou(){

    system("clear || cls");

    cout << ">>" << adivinha << "<<" << endl << endl;
    cout << "Parabens, voce ganhou!" << endl;
    cout << "E ainda restou(aram) " << cont << " vida(s) :)" << endl << endl;
    pause();

    cont=0;
}

void forca::chutarLetra(){

    cout << "Chute uma letra: ";
    cin >> chute;

    for (size_t i = 0 ; i < chute.size() ; ++i){
        char character = tolower(chute[i]);
        chute[i] = character;
    }

    aux[pod] = chute[0];
}

void forca::jogo(){

    do{
        cout << "      JOGO DA FORCA" << endl  << "----------------------------" << endl << endl;

        if (palavra==adivinha)
            ganhou();

        else{
            system("clear || cls");
            cout << "Voce tem " << cont << " vidas" << endl << endl;

            cout << palavra << endl << endl;

            if(chute[0]!=0){
                cout << "Letras chutadas: ";
                for ( int i = 0; i <= pod; i++)
                    cout << aux[i] << " ";

                cout << endl << endl;
                }
            pod++;

            chutarLetra();
            acharLetra();
        }

    }while(cont!=0);
}
