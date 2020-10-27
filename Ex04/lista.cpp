#include <iostream>
#include <string>
#include "lista.hpp"

#define _MAX_  100

using namespace std;
typedef float TInfo;

Lista::Lista()
{
   qtd=0;
   soma=0;
}

bool Lista::vazia()
{
   return qtd==0;
}
bool Lista::cheia()
{
   return qtd == _MAX_;
}

TInfo Lista::somaMedia(){

    for (int i=0; i<qtd; i++)
        soma=soma+obterElemento(i);

    return soma;
}
