#ifndef PESSOA2_H
#define PESSOA2_H
#include <iostream>

class Pessoa
{   
    private:
        std::string nome, telefone;
        int idade;

    public:
        Pessoa(std::string);
        Pessoa(std::string, int, std::string);
        void setNome(std::string);
        std::string getNome();
        void setIdade(int);
        int getIdade();
        void setTelefone(std::string);
        std::string getTelefone();

};

#endif