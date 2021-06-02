#ifndef CONTA_H
#define CONTA_H
#include "IConta.h"
	
class Conta : public IConta 
{			
	protected:
			string nomeCliente, numeroConta;
			double salarioMensal, saldo, limite;
	public:
		Conta();
		Conta(string, string, double);

		void sacar(double);
		void depositar(double);
		float saldoTotalDisponivel();
		void definirLimite();
		void setLimite(double);

		string getNomeCliente();
		string getNumeroConta();
		double getSalarioMensal();
	
};
#endif