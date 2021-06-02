#include "Conta.h"  
	
Conta::Conta(){

}

Conta::Conta(string nomeCliente, string numeroConta, double salarioMensal)
{
	this -> nomeCliente = nomeCliente;
    this -> numeroConta = numeroConta;
    this -> salarioMensal = salarioMensal;
    saldo = 0;
    definirLimite();
}

void Conta::definirLimite(){
    limite = salarioMensal * 2;
}

void Conta::sacar(double valor){
    saldo -= valor;
}

float Conta::saldoTotalDisponivel(){
    return saldo + limite;
}

void Conta::depositar(double valor){
    saldo += valor;
}

string Conta::getNomeCliente(){
    return nomeCliente;
}

string Conta::getNumeroConta(){
    return numeroConta;
}

double Conta:: getSalarioMensal(){
    return salarioMensal;
}