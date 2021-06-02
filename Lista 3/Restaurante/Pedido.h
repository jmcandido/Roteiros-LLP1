#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>
#include <iostream>
#define QUANT 100

class Pedido {

    private:
            std::string descricao;
            int quantidade;
            int numero;
            float preco;
    public:
            Pedido();
            Pedido(int, std:: string, int, float);
            void aumentaQuantidade(int);

            int getNumero();
            std::string getDescricao();
            int getQuantidade();
            float getPreco();
};

#endif