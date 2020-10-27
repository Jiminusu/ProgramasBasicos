#ifndef PRESENCA_HPP_INCLUDED
#define PRESENCA_HPP_INCLUDED
#include <string>

#define MAX 100

using namespace std;

class presenca{

    private:
        int opc, qtd, aux, bla;
        string nome[MAX], falta[MAX], excluir;

    public:
        presenca();
        void menu();
        int var();
        void escolha();
        void pause();
        void excluirERealocar();

};

#endif // PRESENCA_HPP_INCLUDED
