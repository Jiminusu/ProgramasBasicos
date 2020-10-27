#include <iostream>
#include <string>
#include "lista.hpp"

#define _MAX_  100

using namespace std;
typedef float TInfo;

Lista::Lista()
{
   qtd=0;
   turma=0;
}

bool Lista::vazia()
{
   return qtd==0;
}
bool Lista::cheia()
{
   return qtd == _MAX_;
}

void Lista::mediaTurma(TInfo info){

    turma=turma+info;
}

TInfo Lista::mostrarMTurma(){

    mediaDeGeral=turma/dorgas;
    return mediaDeGeral;
}

void Lista::soVai(int aux){

    dorgas=aux;
}

TInfo Lista::mediaindividual(int aux){
    return v[aux];
}
