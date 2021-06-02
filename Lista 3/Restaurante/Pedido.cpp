#include "Pedido.h"

Pedido::Pedido(){
    quantidade = 0;
    preco = 0;
    numero = 0;
}

Pedido::Pedido(int numero, std::string descricao, int quantidade, float preco){
    this -> descricao = descricao;
    this -> quantidade = quantidade;
    this -> preco = preco;
    this -> numero = numero;
}

std::string Pedido::getDescricao(){
    return descricao;
}

int Pedido::getNumero(){
    return numero;
}

float Pedido::getPreco(){
    return preco;
}

int Pedido::getQuantidade(){
    return quantidade;
}

void Pedido::aumentaQuantidade(int quant){
    quantidade += quant;
}