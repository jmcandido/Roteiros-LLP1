#include "Retangulo.h"

Retangulo::Retangulo(){

}

Retangulo::Retangulo(int tipo)
    :FiguraGeometrica(tipo)
{
    nome = "Retângulo";
}

float Retangulo::CalcularArea(){
    return comprimento * largura;
}

void Retangulo::LerAtributosArea(){
    std::cin >> largura;
    std::cin >> comprimento;
}