#include "Circulo.h"

Circulo::Circulo(){
    
}
Circulo::Circulo(int tipo)
    :FiguraGeometrica(tipo)
{
    nome = "Círculo";
}

float Circulo::calcularArea(){
    return (raio * raio) * PI;
}

void Circulo::lerAtributosArea(){
    std::cin >> raio;
}