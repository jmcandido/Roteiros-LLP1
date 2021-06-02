#include "Circulo.h"

Circulo::Circulo(){
    
}
Circulo::Circulo(int tipo)
    :FiguraGeometrica(tipo)
{
    nome = "Círculo";
}

float Circulo::CalcularArea(){
    return (raio * raio) * PI;
}

void Circulo::LerAtributosArea(){
    std::cin >> raio;
}