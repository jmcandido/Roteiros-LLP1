#ifndef ICONTA_H
#define ICONTA_H
#include <iostream>
using namespace std;
	
class IConta  
{
	public:
		 IConta();
		 virtual void sacar(double) = 0;
		 virtual void depositar(double) = 0;
		 virtual float saldoTotalDisponivel() = 0;
	

};
#endif