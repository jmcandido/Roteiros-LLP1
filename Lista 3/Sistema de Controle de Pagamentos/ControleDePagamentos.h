#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include "Pagamento.h"
#define QUANT 100


class ControleDePagamentos{

    private:
            Pagamento pagamentos[QUANT];
    
    public:
            void setPagamento(Pagamento p, int index);
            Pagamento getPagamento(int pos);
            float calculaTotalDePagamentos();
            int getIndexFuncionario(std::string nomeFuncionario);


};

#endif