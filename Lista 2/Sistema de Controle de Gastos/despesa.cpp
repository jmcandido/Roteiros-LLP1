#include "Despesa.h"

Despesa::Despesa()
{
    valor = 0;
}

void Despesa::setNome(std::string nome)
{
   this -> nome = nome;
}

std::string Despesa::getNome()
{
    return nome;
}

void Despesa::setValor(float valor)
{
    this -> valor = valor;
}

float Despesa::getValor()
{
    return valor;
}

void Despesa::setTipoDeGasto(std::string tipoDeGasto)
{
    this -> tipoDeGasto = tipoDeGasto;
}

std::string Despesa::getTipoDeGasto()
{
    return tipoDeGasto;
}