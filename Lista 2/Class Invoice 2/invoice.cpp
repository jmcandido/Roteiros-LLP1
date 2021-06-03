#include "Invoice2.h"

Invoice::Invoice(int _numero, string _descricao, int _quantidade, float _preco){   

    numero = _numero;
    descricao = _descricao;
    quantidade = _quantidade;
    preco = _preco;
    
    if (_quantidade < 0)
        quantidade = 0;

    if(_preco < 0)
        preco = 0.0;
}

float Invoice::getInvoiceAmount(){
    return preco * quantidade;
}

void Invoice::setNumero(int _numero){
    numero = _numero;
}

int Invoice::getNumero(){
    return numero;
}

void Invoice::setDescricao(string _descricao){
    descricao = _descricao;
}

string Invoice::getDescricao(){
    return descricao;
}

void Invoice::setQuantidade(int _quantidade){
    quantidade = _quantidade;
}

int Invoice::getQuantidade(){
    return quantidade;
}

void Invoice::setPreco(float _preco){
    preco = _preco;
}

float Invoice::getPreco(){
    return preco;
}

void Invoice::print(){
   cout << getNumero() << " - " << getDescricao() << " - " << getQuantidade() << " - " << getPreco() << " - "  << getInvoiceAmount() << endl;
}