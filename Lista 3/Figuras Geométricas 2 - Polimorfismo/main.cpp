#include "Quadrado.h"
#include "Retangulo.h"
#include "Triangulo.h"
#include "Circulo.h"

using namespace std;

int main(){

    int tipo, i = 0;
    FiguraGeometrica *fig[100];

    do{
        cin >> tipo;

        if(tipo == 0)
        {
            break;

        }else if(tipo == 1){

            fig[i] = new Quadrado(tipo);  

        }else if(tipo == 2){

            fig[i] = new Retangulo(tipo);

        }else if(tipo == 3){

            fig[i] = new Triangulo(tipo);
            
        }else if(tipo == 4){

            fig[i] = new Circulo(tipo);
        }

        fig[i]->LerAtributosArea();
        i++;

    }while(tipo != 0);

    for(int j = 0; j < i; j++){
        cout << fig[j]->getNome() << " polimórfico de área " << fig[j]->CalcularArea() << endl;
    }

}