#include "ContaEspecial.h"  
	
ContaEspecial::ContaEspecial()
{
	
}

ContaEspecial::ContaEspecial(string nomeCliente, string numeroConta, double salarioMensal)
      : Conta(nomeCliente, numeroConta, salarioMensal)
{
    definirLimite();
}

void ContaEspecial::definirLimite(){
    limite = salarioMensal * 3;
}
