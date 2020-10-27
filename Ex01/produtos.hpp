#ifndef PRODUTOS_HPP_INCLUDED
#define PRODUTOS_HPP_INCLUDED

#include <string>

using namespace std;

class cardapio{

    private:
        int i, qtd, pedido;
        string produto[100];
        float valor[100];

    public:
        void menu(int n);
        void leia_produtos(int n);
        void fechar_pedido();
        int loop();
};

#endif // PRODUTOS_HPP_INCLUDED
