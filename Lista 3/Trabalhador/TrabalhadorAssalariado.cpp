#include "TrabalhadorAssalariado.h"

TrabalhadorAssalariado::TrabalhadorAssalariado(){
}

TrabalhadorAssalariado::TrabalhadorAssalariado(std::string nome, double salario){
    this -> salario = salario;
    this -> nome = nome;
}

double TrabalhadorAssalariado::CalcularPagamentoSemanal(){

    return salario / 4;
}