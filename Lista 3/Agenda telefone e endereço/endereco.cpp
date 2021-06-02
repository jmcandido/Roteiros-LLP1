#include "Endereco.h"

 Endereco::Endereco(){

 }

 Endereco::Endereco(string rua, string numero, string bairro, string cidade, string estado, string cep){
    
    this -> rua = rua;
    this -> numero = numero;
    this -> bairro = bairro;
    this -> cidade = cidade;
    this -> estado = estado;
    this -> cep = cep;
 }

string Endereco::toString(){
    return rua + ", " + numero + ". " + cidade + " - " + estado + ". CEP: " + cep;
}