#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <string> 

class Trabalhador{

    protected:
              std::string nome;
              double salario;
    public: 
             Trabalhador();
             std::string getNome();
             double getSalario();

             void setNome(std::string);
             void setSalario(double);
};

#endif