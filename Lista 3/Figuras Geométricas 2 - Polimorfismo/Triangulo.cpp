#include "Triangulo.h"

Triangulo::Triangulo(){
    
}

Triangulo::Triangulo(int tipo)
    :FiguraGeometrica(tipo)
{
    nome = "Triângulo";
}

float Triangulo::CalcularArea(){
    return (altura * base) / 2;
}

void Triangulo::LerAtributosArea(){
    std::cin >> base;
    std::cin >> altura;
}