#ifndef POLINOMIO_HPP_INCLUDED
#define POLINOMIO_HPP_INCLUDED

using namespace std;

#define MAX 100

class polinomio{

    private:
        int i, exp[MAX];
        float x, resul;
        float coef[MAX], potencia[MAX], baixo[MAX];

    public:
        polinomio();
        void leituraTermos(int aux);
        void apresentacaoSemConta(int aux);
        float base();
        void apresentacaoComBase(int aux);
        float contaDeFato(int aux);

};

#endif // POLINOMIO_HPP_INCLUDED
