#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>

class Pagamento{

    private:
            float valorPagamento;
            std::string NomeDoFuncionario; 
    public: 
            Pagamento();
            void setValorPagamento(float);
            float getValorPagamento();
            void setNomeDoFuncionario(std::string);
            std::string getNomeDoFuncionario();
};

#endif