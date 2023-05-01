#include <iostream>
using namespace std;

class Aluno{
    private:
    int ra;
    std::string nome;

    public:
    Aluno(); // Função padrão
    Aluno(int r, std::string n); //construtor
    string obterNome(); // Função Pegar nome do Aluno
    int obterRa(); // Função pra pegar RA
};