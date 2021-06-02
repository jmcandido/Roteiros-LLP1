#ifndef CASA_H
#define CASA_H
#include "Imovel.h"

class Casa : public Imovel  
{
	private:
			int numPavimentos, numQuartos;
			double areaDoTerreno, areaConstruida;
	
	public:
		Casa();
		void exibeAtributos();
		void lerAtributos();


};
#endif