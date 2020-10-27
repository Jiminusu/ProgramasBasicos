#ifndef INSERIR_HPP_INCLUDED
#define INSERIR_HPP_INCLUDED

#define _MAX_  100

using namespace std;
typedef float TInfo;

class Lista{

   private:
        TInfo v[_MAX_], turma, mediaDeGeral, soma;
        string aluno[_MAX_];
        int   qtd, dorgas;

   public:
        Lista();
        bool vazia();
        bool cheia();
        TInfo somaMedia();

        int  obterQtd();
        TInfo obterElemento(int pos);
        int obterIndice(TInfo info);
        bool existe(TInfo info);
        void inserirOrdenado(TInfo info);

        void remover(TInfo info);
        void remover(int pos);
        void removerNoInicio();
        void removerNoFinal();
};

#endif // INSERIR_HPP_INCLUDED
