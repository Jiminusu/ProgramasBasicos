#ifndef INSERIR_HPP_INCLUDED
#define INSERIR_HPP_INCLUDED

#include <string>
#define _MAX_  100

using namespace std;
typedef float TInfo;

class Lista{

   private:
        TInfo v[_MAX_], turma, mediaDeGeral;
        string aluno[_MAX_];
        int   qtd, dorgas;

   public:
        Lista();
        bool vazia();
        bool cheia();
	void mediaTurma(TInfo info);
        TInfo mostrarMTurma();
        void soVai(int aux);
        TInfo mediaindividual(int aux);

        int  obterQtd();
        string obterAluno(int pos);       
        TInfo obterElemento(int pos);
        int obterIndice(TInfo info);
        bool existe(TInfo info);
        void inserirOrdenado(TInfo info, string aux);

        void remover(TInfo info);
        void remover(int pos);
};

#endif // INSERIR_HPP_INCLUDED
