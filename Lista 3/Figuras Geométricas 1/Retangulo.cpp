#include "Retangulo.h"

Retangulo::Retangulo(){

}

Retangulo::Retangulo(int tipo)
    :FiguraGeometrica(tipo)
{
    nome = "Retângulo";
}

float Retangulo::calcularArea(){
    return comprimento * largura;
}

void Retangulo::lerAtributosArea(){
    std::cin >> largura;
    std::cin >> comprimento;
}