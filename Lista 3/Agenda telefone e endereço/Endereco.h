#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>

using namespace std;

class Endereco{

    private:
            string rua;
            string cep;
            string bairro;
            string cidade;
            string estado;
            string numero;

    public:
            string toString();
            Endereco();
            Endereco(string, string, string, string, string, string);
};
#endif