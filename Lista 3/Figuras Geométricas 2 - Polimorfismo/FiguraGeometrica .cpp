#include "FiguraGeometrica.h"

FiguraGeometrica::FiguraGeometrica(){
    
}

FiguraGeometrica::FiguraGeometrica(int tipo){
    this -> tipo = tipo;
}

float FiguraGeometrica::CalcularArea(){
    return 0;
}

void FiguraGeometrica::LerAtributosArea(){

}

std::string FiguraGeometrica::getNome(){
    return nome;
}