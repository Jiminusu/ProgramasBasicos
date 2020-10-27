#ifndef CONJUNTO_HPP_INCLUDED
#define CONJUNTO_HPP_INCLUDED

#define MAX 100

using namespace std;

class conjunto{

    private:
        int A[MAX], B[MAX], qtd, i;

    public:
        void leiaConjunto(int n, char AB);
        void obterQtd(int aux);
        void Imprime(int conjunto[2*MAX], int Tam);
        int Altera(int conjunto[MAX]);
        bool Existe(int valor, int conjunto[2*MAX], int Tam);
        int Uniao(int ElemA, int ElemB, int ConjU[2*MAX]);
        int Intersecao(int ElemA, int ElemB, int ConjI[MAX]);
        int DiferencaA(int ElemA, int ElemB, int ConjD[MAX]);
        int DiferencaB(int ElemA, int ElemB, int ConjD[MAX]);
};

#endif // CONJUNTO_HPP_INCLUDED
