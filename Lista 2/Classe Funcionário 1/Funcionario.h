#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

class Funcionario 
{
    public:
        std::string nome, sobrenome;
        float salario;
        float getSalarioAnual();
};

#endif