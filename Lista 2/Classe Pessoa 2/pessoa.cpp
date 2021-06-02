#include "Pessoa2.h"

Pessoa::Pessoa(std::string nome, int idade, std::string telefone)
{
    this -> nome = nome;
    this -> idade = idade;
    this -> telefone = telefone;

}

Pessoa::Pessoa(std::string nome)
{
    this -> nome = nome;

}

void Pessoa::setNome(std::string nome)
{
    this -> nome = nome;
}

std::string Pessoa::getNome()
{
    return nome;
}

void Pessoa::setTelefone(std::string telefone)
{
    this -> telefone = telefone;
}

std::string Pessoa::getTelefone()
{
    return telefone;
}

void Pessoa::setIdade(int idade)
{
    this -> idade = idade;
}

int Pessoa::getIdade()
{
    return idade;
}