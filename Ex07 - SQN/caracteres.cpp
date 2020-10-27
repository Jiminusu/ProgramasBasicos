#include <iostream>
#include <string>
#include "caracteres.hpp"

using namespace std;

caracteres::caracteres(){

    espec="{[()]}";
    cont=valid.length();
}

void caracteres::acharCaracteres(){

    bool achou=false;
    int pos=0;

    while(pos<valid.length()){
        if (espec[0] == valid[pos]){
            for (int i=pos+1; i<valid.length(); i++)
                if (valid[i]==espec[5]){
                    for (int pod=i+1; pod<valid.length(); pod++){
                        if (valid[pod]==espec[4] or valid[pod]==espec[3] or valid[pod]==espec[2] or valid[pod]==espec[1] or valid[pod]==espec[0])
                            achou=false;

                            else achou = true; }
                } else achou=false;
        } else achou=true;

        pos++;
    }
    if (!achou){
        cont--;
        cout << endl << "Expressao errada" << endl;
    }
    else
        cout << endl << "Expressao correta" <<  endl;
}

void caracteres::validador(string n){

    valid=n;
}

void caracteres::especiais(){

    for(int i=0; i<espec.length(); i++)
        cout << espec[i] << endl;
}
