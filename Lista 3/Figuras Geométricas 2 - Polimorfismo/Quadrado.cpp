#include "Quadrado.h"

Quadrado::Quadrado(){
    
}
Quadrado::Quadrado(int tipo)
    :FiguraGeometrica(tipo)
{
    nome = "Quadrado";
}

float Quadrado::CalcularArea(){
    return lado * lado;
}

void Quadrado::LerAtributosArea(){
    std::cin >> lado;
}