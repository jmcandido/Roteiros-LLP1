#include "Pessoa.h"

Pessoa::Pessoa(){
    
}

Pessoa::Pessoa(string nome){
    this -> nome = nome;
}

Pessoa::Pessoa(string nome, Endereco endereco, string telefone ) : Pessoa(nome){

    this -> endereco = endereco;
    this -> telefone = telefone;

}

string Pessoa::toString(){
    return nome + ", " + telefone + "\n" + endereco.toString();
}

void Pessoa::setNome(string nome){
     this -> nome = nome;
 }

string Pessoa::getNome(){
     return nome;
}

void Pessoa::setTelefone(string telefone){
     this -> telefone = telefone;
 }

string Pessoa::getTelefone(){
     return telefone;
} 

void Pessoa::setEndereco(Endereco endereco){
     this -> endereco = endereco;
 }

 Endereco Pessoa::getEndereco(){
     return endereco;
 }