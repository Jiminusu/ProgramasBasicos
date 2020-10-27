#ifndef INSERIR_HPP_INCLUDED
#define INSERIR_HPP_INCLUDED

#define MAX  5

using namespace std;

class Lista{

    private:
        float par[MAX], impar[MAX];
        int qtdp, qtdi, i;

    public:
        Lista();
        void inserir(int n);
        void mostrar();
        void mostrarTudo();

};

#endif // INSERIR_HPP_INCLUDED
