#ifndef FUNCIONARIO2_H
#define FUNCIONARIO2_H
#include <iostream>

using namespace std;

class Funcionario
{
    private:
        string nome,sobrenome;
        float salario;

    public:
        Funcionario(string, string, float);
        void setNome(string);
        string getNome();
        void setSobrenome(string);
        string getSobrenome();
        void setSalario(float);
        float getSalario();
        float getSalarioAnual();
        void aumentaSalario(float percent);
        void print();
};

#endif