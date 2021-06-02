#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.h"

class MesaDeRestaurante{
    
        private:
                Pedido pedidos[QUANT];
        public:
                void adicionarPedido(Pedido);
                void zerarPedidos();
                float calculaTotal();
                void exibeConta();
};

#endif