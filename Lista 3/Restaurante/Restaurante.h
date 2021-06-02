#ifndef RESTAURANTE_H
#define RESTAURANTE_H
#include "MesaDeRestaurante .h"

class Restaurante{

    private:
            MesaDeRestaurante mesas[QUANT];
    public:
            void adicionarPedido(Pedido, int);
            float calculaTotalRestaurante();
            MesaDeRestaurante getMesa(int);

};

#endif