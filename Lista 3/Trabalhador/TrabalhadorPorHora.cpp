#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora(){
    
}

TrabalhadorPorHora::TrabalhadorPorHora(std::string nome, double valorDaHora){
    this -> nome = nome;
    this -> ValordaHora = valorDaHora;
}

 double TrabalhadorPorHora::CalcularPagamentoSemanal(int horasSemanais){
    double salario_semanal;

    if(horasSemanais <= 40)
        salario_semanal = ValordaHora * horasSemanais;
    else
        salario_semanal = ValordaHora * 40 + (horasSemanais - 40) * ValordaHora * 1.5;

    salario = salario_semanal * 4;

    return salario_semanal;
}