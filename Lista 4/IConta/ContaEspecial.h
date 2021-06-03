#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "Conta.h"
	
class ContaEspecial : public Conta 
{
	private:

	public:
		ContaEspecial();
		ContaEspecial(string, string, double);
		void definirLimite();
		
};
#endif