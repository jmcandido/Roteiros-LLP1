#include "Funcionario2.h"
#include <iostream>

Funcionario::Funcionario(std::string nome, string sobrenome, float salario){
    this -> nome = nome;
    this -> sobrenome = sobrenome;
    this -> salario = salario;
}


void Funcionario::setNome(std::string nome){
    this -> nome = nome;
}

string Funcionario::getNome(){
    return nome;
}

void Funcionario::setSobrenome(std::string sobrenome){
    this -> sobrenome = sobrenome;
}

string Funcionario::getSobrenome(){
    return sobrenome;
}

void Funcionario::setSalario(float salario){
    this -> salario = salario;
}

float Funcionario::getSalario(){
    return salario;
}

float Funcionario::getSalarioAnual(){
    return salario * 12;
}

 void Funcionario::print(){    
      cout << nome << " " << sobrenome << " - " << salario << " - " << this -> getSalarioAnual() << endl;
 }

 void Funcionario::aumentaSalario(float percent){ 
     salario += (salario * percent);
 }