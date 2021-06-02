#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

class Funcionario{

    protected:
              std::string matricula;
              std::string nome;
              double salario;

    public:
            Funcionario();
            void setMatricula(std::string);
            void setNome(std::string);
            void setSalario(double);

            std::string getMatricula();
            std::string getNome();
            double getSalario();
};

#endif