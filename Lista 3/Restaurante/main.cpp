#include "Restaurante.h"
#include <iostream>

using namespace std;

int main(){

    Pedido p;
    Restaurante r;
    string descricao;
    int numero, mesa, quantidade;
    float preco;

    while (1){

        cin >> numero;
        getchar();

        if(numero < 0)
            break;
        
        getline(cin, descricao);
        cin >> quantidade >> preco >> mesa;
        getchar();

        p = Pedido(numero, descricao, quantidade, preco);
        r.adicionarPedido(p, mesa);
    }
    
     for(int i = 0; i < QUANT; i++){
            if(r.getMesa(i).calculaTotal() > 0){
                cout << "Mesa " << i << endl;
                r.getMesa(i).exibeConta();
            }
         }
         
    cout << "Total restaurante: R$ " << r.calculaTotalRestaurante() << endl;
}