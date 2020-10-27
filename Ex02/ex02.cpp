#include <iostream>
#include <string>
#include <iomanip>
#include "lista.hpp"

#define _MAX_  100

using namespace std;
typedef float TInfo;

int main(){

    Lista l;
    int qtd, i;
    float nota1, nota2, media;
    string nome;

    cout << "         MEDIA" << endl  << "--------------------------" << endl << endl;

    cout << "Insira a quantidade de alunos: ";
    cin >> qtd;

    l.soVai(qtd);

    cout << endl;

    for (i=0; i<qtd; i++){
        cout << "Nome do Aluno: ";
        cin.ignore();
        getline(cin, nome);

        cout << "Primeira nota: ";
        cin >> nota1;

        cout << "Segunda nota: ";
        cin >> nota2;

        cout << endl << fixed << setprecision(2);

        media=(nota1 + 2*nota2) / 3;

        l.mediaTurma(media);
        l.inserirOrdenado(media, nome);
    }

    for (i=0; i<qtd; i++)
            while (l.mediaindividual(i) < l.mostrarMTurma())
                l.remover(i);

    cout << endl << "Media da turma: " << l.mostrarMTurma() << endl << l.obterQtd() <<
    " Aluno(s) com media superior a media da turma" << endl;

    for(i=0; i<l.obterQtd();i++)
        cout << endl << "Nome: " << l.obterAluno(i) << endl << "Media: " << l.obterElemento(i) << endl;

    return 0;
}
