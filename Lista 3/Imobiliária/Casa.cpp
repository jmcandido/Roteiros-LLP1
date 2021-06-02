#include "Casa.h"  
	
Casa::Casa() : Imovel ()
{
    nome = "Casa";
	
}

void Casa::lerAtributos(){

    cin >> valor;
    getchar();
    cin >> disponibilidade;
    cin >> numPavimentos;
    cin >> numQuartos;
    cin >> areaDoTerreno;
    cin >> areaConstruida;
}

void Casa::exibeAtributos(){

   std::cout << nome << " para " << disponibilidade << ". " << numPavimentos << " pavimentos, " << numQuartos
             << " quartos, " << areaDoTerreno << "m2 de área de terreno e " << areaConstruida 
             << "m2 de área construia. R$ "  << valor << "." << endl;
}

