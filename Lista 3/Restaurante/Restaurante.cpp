#include "Restaurante.h"

void Restaurante::adicionarPedido(Pedido p, int i){
    mesas[i].adicionarPedido(p);
}

float Restaurante::calculaTotalRestaurante(){

    float total = 0;

    for(int i = 0; i < QUANT; i++){

      total += mesas[i].calculaTotal();

    }

    return total;
}

MesaDeRestaurante Restaurante::getMesa(int i){
    return mesas[i];
}