#include "Funcionario.h"

Funcionario::Funcionario(){
    
}

void Funcionario::setMatricula(std::string matricula){
    this -> matricula = matricula;
}

std::string Funcionario::getMatricula(){
    return matricula;
}

void Funcionario::setNome(std::string nome){
    this -> nome = nome;
}

std::string Funcionario::getNome(){
    return nome;
}

void Funcionario::setSalario(double salario){
    this -> salario = salario;
}

double Funcionario::getSalario(){
    return salario;
}
