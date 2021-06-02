#ifndef PESSOA_H
#define PESSOA_H
#include "Endereco.h"

class Pessoa{

    private:
            string nome, telefone;
            Endereco endereco;

    public: 
            string toString();
            Pessoa();
            Pessoa(string);
            Pessoa(string, Endereco, string);
            void setNome(string);
            string getNome();
            void setTelefone(string);
            string getTelefone();
            void setEndereco(Endereco);
            Endereco getEndereco();
            
};

#endif