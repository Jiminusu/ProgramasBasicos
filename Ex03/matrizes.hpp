#ifndef MATRIZES_HPP_INCLUDED
#define MATRIZES_HPP_INCLUDED

#define MAX 100

class matrizes{

    private:
        float tam, mat1[MAX][MAX], mat2[MAX][MAX], mat3[MAX][MAX];
        int i, j;

    public:
        void recebeTamanho(float aux);
        void soma();
        void multiplicacao();
        void guardarMatrizes();
        void mostrarMatrizes();
};

#endif // MATRIZES_HPP_INCLUDED
