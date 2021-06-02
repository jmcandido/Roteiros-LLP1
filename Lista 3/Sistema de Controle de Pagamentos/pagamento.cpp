#include "Pagamento.h"

Pagamento::Pagamento(){

    valorPagamento = 0;
}

void Pagamento::setValorPagamento(float valor){

    this -> valorPagamento = valor;

}

float Pagamento::getValorPagamento(){

    return valorPagamento;

}

void Pagamento::setNomeDoFuncionario(std::string nome){

    this -> NomeDoFuncionario = nome;

}

std::string Pagamento::getNomeDoFuncionario(){
    
    return NomeDoFuncionario;
}
