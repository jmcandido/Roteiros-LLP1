#include "Imovel.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"
#include <vector>

int main (){

    int N, tipo;
    cin >> N;
    getchar();
    vector <Imovel*> im;

    for (int i = 0; i < N; i++){
        cin >> tipo;
        switch (tipo){
            case 1:
                im.push_back(new Casa());
                break;
            case 2:
                im.push_back(new Apartamento());
                break;
            case 3:
                im.push_back(new Terreno());
                break;
        }

        im[i]->lerAtributos();
    }

    for(int i = 0; i < im.size(); i++){
        im[i]->exibeAtributos();
    }


}
    

    