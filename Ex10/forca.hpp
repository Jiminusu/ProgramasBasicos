#ifndef FORCA_HPP_INCLUDED
#define FORCA_HPP_INCLUDED
#include <string>

using namespace std;

class forca{

    private:
        string palavra, adivinha, chute, aux;
        int cont, go, pod;

    public:
        forca();
        void pause();
        void acharLetra();
        void converterTracos();
        void secreta(string n);
        void ganhou();
        void jogo();
        void chutarLetra();
};

#endif // FORCA_HPP_INCLUDED
