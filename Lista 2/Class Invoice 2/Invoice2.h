#ifndef INVOICE2_H
#define INVOICE2_H
#include <iostream>

using namespace std;


class Invoice
{
    private:
        int numero;
        string descricao;
        int quantidade;
        float preco;

    public:
        Invoice(int, string, int, float);

        void setNumero(int);
        int getNumero();

        void setDescricao(string);
        string getDescricao();

        void setQuantidade(int);
        int getQuantidade();

        void setPreco(float);
        float getPreco();

        float getInvoiceAmount();
        void print();
};
#endif