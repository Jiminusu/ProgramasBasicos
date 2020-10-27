#ifndef CARACTERES_HPP_INCLUDED
#define CARACTERES_HPP_INCLUDED

#include <string>

using namespace std;

class caracteres{

    private:
        string espec, valid;
        int cont;

    public:
        caracteres();
        void especiais();
        void validador(string n);
        void acharCaracteres();

};

#endif // CARACTERES_HPP_INCLUDED
