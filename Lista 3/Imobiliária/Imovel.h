#ifndef IMOVEL_H
#define IMOVEL_H
#include <string>
#include <iostream>
using namespace std;
class Imovel  
{
	protected:
			string nome;
			double valor;
			string disponibilidade;

	public:
		Imovel();
		virtual void exibeAtributos() = 0;
		virtual void lerAtributos() = 0;

};
#endif