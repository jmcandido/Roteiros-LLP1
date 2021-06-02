#include "Terreno.h"  
	
Terreno::Terreno() : Imovel()
{
	nome = "Terreno";

}

void Terreno::lerAtributos(){

	std::cin >> valor;
	getchar();
	cin >> disponibilidade;
	std::cin >> area;
}

void Terreno::exibeAtributos(){

     std::cout << nome << " para " << disponibilidade << ". " << 
	 	  area << "m2 de área de terreno. " << "R$ " << 
		  valor << "." << endl;

}