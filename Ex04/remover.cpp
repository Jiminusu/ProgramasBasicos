#include <iostream>
#include <string>
#include "lista.hpp"

#define _MAX_  100

using namespace std;
typedef float TInfo;

void Lista::remover(TInfo info){
   if (vazia()){
      cerr << "lista vazia ao tentar remover a informacao" << endl;
      exit(0);
   }
   else{
    	int pos = obterIndice(info);
	    remover(pos);
   }
}

void Lista::remover(int pos){
    if (vazia()){
        cerr << "lista vazia ao tentar remover na posicao" << endl;
        exit(0);
    }
    else{
        int i;
        for (i=pos+1;i<qtd;i++){
            v[i-1] = v[i];
        }
        qtd--;
    }
}

void Lista::removerNoInicio(){
    if (vazia()){
        cerr << "lista vazia ao tentar remover no inicio" << endl;
        exit(0);
    }

    else{
        int i;
        while (v[0]==v[1]){
            for (i=1;i<qtd;i++)
                v[i-1] = v[i];
            qtd--;

            if (v[0]==v[1]){
                for (i=1;i<qtd;i++)
                    v[i-1] = v[i];
                qtd--;
            }
        }

        for (i=1;i<qtd;i++)
            v[i-1] = v[i];
        qtd--;
   }
}

void Lista::removerNoFinal(){
   if (vazia()){
      cerr << "lista vazia ao tentar remover no final" << endl;
      exit(0);
   }
    else
        while (v[qtd]==v[qtd-1]){
            qtd--;

            if (v[qtd]==v[qtd-1])
                qtd--;
            }
}
