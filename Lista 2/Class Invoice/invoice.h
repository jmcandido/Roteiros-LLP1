#ifndef INVOICE_H
#define INVOICE_H
#include <iostream>

using namespace std;


class Invoice
{   
    public:
        int numero;
        string descricao;
        int qtd;
        float preco;
        float getInvoiceAmount();

};

#endif

