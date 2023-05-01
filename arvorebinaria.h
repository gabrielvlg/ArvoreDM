#include <iostream>
#include "aluno.h"

struct No{
    Aluno aluno;  // obj aluno da classe aluno
    No* filhoesquerda; // ponteiro pra outros nos
    No* filhodireita;
};

class Bst{
    private:
    No* raiz; 

    public:
    Bst(); //construtor
    ~Bst(); //destrutor
    void deletarArvore(No* Noatual); 
    No* obterRaiz();
    bool estavazio();
    bool estacheio();
    void inserir(Aluno aluno);
    void remover(Aluno aluno);
    void removerbusca(Aluno aluno, No*& noatual);
    void deletarNo(No*& noatual);
    void obterSucessor(Aluno& AlunoSucessor, No* temp);
    void buscar(Aluno& aluno, bool& busca);
    void imprimirpreordem(No* Noatual);
    void imprimiremordem(No* Noatual);
    void imprimirposordem(No* Noatual); 
};