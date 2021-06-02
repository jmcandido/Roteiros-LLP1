#include "Apartamento.h"  
	
Apartamento::Apartamento() : Imovel ()
{
	nome = "Apartamento";
}

void Apartamento::lerAtributos(){

    cin >> valor;
    getchar();
    cin >> disponibilidade;
    cin >> area;
    cin >> numQuartos;
    cin >> andar;
    cin >> valorCondominio;
    cin >> numVagas;
}

void Apartamento::exibeAtributos(){
    cout << nome << "para " << disponibilidade << ". " << area << "m2 de área, "  << numQuartos << " quartos, "
    << andar << " andar(es), " << valorCondominio << " de condomínio, " << numVagas << " vaga(s) de garagem. "
    << "R$ " << valor << "." << endl;
}
