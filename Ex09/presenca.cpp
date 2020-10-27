#ifdef WIN32
#define PAUSE 1
#else
#define PAUSE 0
#include <iostream>
#include "presenca.hpp"

#define MAX 100

using namespace std;

presenca::presenca(){
    aux=0;
    bla=0;
}

void presenca::excluirERealocar(){

    bool achou=false;
    int pos=0;

    while(!achou && pos<aux){
        if (excluir == nome[pos]){
            achou = true;
            for(int i=pos; i<aux; i++){
                nome[i]=nome[i+1];
                falta[i]=falta[i+1];
            }
            aux--;
            cout << endl << "Aluno excluido com sucesso!" << endl;
        }
        else
            pos++;
    }
    if (!achou)
        cout << endl << "Aluno nao encontrado!" << endl;
}

int presenca::var(){

    return opc;
}

void presenca::menu(){
    do{
        cout << "------------MENU------------" << endl;
        cout << "1- Inserir alunos" << endl;
        cout << "2- Excluir alunos" << endl;
        cout << "3- Listar todos os alunos" << endl;
        cout << "4- Dar presenca" << endl;
        cout << "5- Lista de presenca" << endl;
        cout << "0- Sair" << endl;
        cout << "----------------------------" << endl << endl;

        cout << "Escolha uma opcao: ";
        cin >> opc;

        cout << endl;
        system("clear || cls");

    }while(opc>5);
}

void presenca::pause(){
    if(PAUSE==1)
        system("pause");
    else
        system("read -p \"\nPressione enter para voltar ao menu\" saindo");
}

void presenca::escolha(){

        switch(opc){
        case 1: //inserir alunos
            cout << "Quantos alunos deseja inserir? ";
            cin >> qtd;
            cin.ignore();

            if(aux==0){
                for (int i=0; i<qtd; i++){
                    cout << "Nome: ";
                    getline(cin, nome[i]);
                    falta[i]="0";
                }
                aux=aux+qtd;
            }

            else{
                for (int i=aux; i<aux+qtd; i++){
                    cout << "Nome: ";
                    getline(cin, nome[i]);
                    falta[i]="f";
                }
                aux=aux+qtd;
            }

            pause();
            system("clear || cls");

            break;

        case 2: //excluir alunos
            cin.ignore();
            cout << "Digite o nome do Aluno que sera excluido: ";
            getline(cin, excluir);

            excluirERealocar();

            pause();
            system("clear || cls");

            break;

        case 3: //listar alunos
            cout << "Alunos: " << endl;
            for (int i=0; i<aux; i++)
                cout << i+1 << "- " << nome[i] << endl;

            pause();
            system("clear || cls");

            break;

        case 4: //dar presenca
            cout << "Digite P ou F" << endl << endl;

             if(bla==0 || bla==aux){
                for (int i=0; i<aux; i++){
                    do{
                        cout << nome[i] << ": ";
                        cin >> falta[i];
                    }while(falta[i]!="p" && falta[i]!="f" && falta[i]!="P" && falta[i]!="F");
                } bla=aux;
            }

            else{
                for (int i=bla; i<bla+qtd; i++){
                    do{
                        cout << nome[i] << ": ";
                        cin >> falta[i];
                    }while(falta[i]!="p" && falta[i]!="f" && falta[i]!="P" && falta[i]!="F");
                } bla=aux;
            }

            cout << endl;

            pause();
            system("clear || cls");

            break;
        case 5: //lista de presenca
            cout << "Alunos: " << endl;
            for (int i=0; i<aux; i++){
                if (falta[i]=="P" || falta[i]=="p")
                    cout << i+1 << "- " << nome[i] << ": Presente" << endl;
                else
                    cout << i+1 << "- " << nome[i] << ": Faltou" << endl;
            }

            pause();
            system("clear || cls");

            break;
        default:
            break;

    }
}
#endif
