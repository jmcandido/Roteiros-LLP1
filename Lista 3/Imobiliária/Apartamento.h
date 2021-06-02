#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include "Imovel.h"

class Apartamento : public Imovel
{
	protected:
			double area, valorCondominio;
			int numQuartos, andar, numVagas;
	public:
		Apartamento();
		void exibeAtributos();
		void lerAtributos();
};
#endif