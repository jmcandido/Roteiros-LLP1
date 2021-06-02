#include "Consultor.h"

Consultor::Consultor(){
    
}
double Consultor::getSalario(){

    return salario + (salario * 0.1);
}

double Consultor::getSalario(double percentual){
    
    return salario + (salario * percentual);
}