#include <iostream>
#include <string>
#include "lista.hpp"

#define _MAX_  100

using namespace std;
typedef float TInfo;

int Lista::obterQtd()
{
   return qtd;
}

TInfo Lista::obterElemento(int pos){
   if (pos<0 || pos>=qtd){
      exit(0);
   }
   return v[pos];
}

int Lista::obterIndice(TInfo info){

   bool achou=false;
   int i=0;
   while (!achou && i<qtd)
     if (info==v[i])
         achou = true;
     else
         i++;
   return achou?i:-1;
}


bool Lista::existe(TInfo info){
   return obterIndice(info)!=-1;
}

void Lista::inserirOrdenado(TInfo info){
   if (cheia()){
        cerr << "lista cheia ao tentar inserir ordenado" << endl;
        exit(0);
   }
   else if(info!=0){
            int i;
            i=qtd-1;

            while (i>=0 && v[i]>info){
                v[i+1]=v[i];
                i--;
            }
            v[i+1] = info;
            qtd++;
        }
}
