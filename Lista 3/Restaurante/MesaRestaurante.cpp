#include "MesaDeRestaurante .h"

 void MesaDeRestaurante::adicionarPedido(Pedido p){

     for(int i = 0; i < QUANT;i++){
         if(pedidos[i].getNumero() == p.getNumero()){
            pedidos[i].aumentaQuantidade(p.getQuantidade());
            return;
         }
     }

     for(int i = 0; i < QUANT; i++){
         if(pedidos[i].getPreco() == 0){
             pedidos[i] = p;
             break;
         }

     }

 }

 void MesaDeRestaurante::zerarPedidos(){
     for(int i = 0; i < QUANT; i++){
         pedidos[i] = Pedido();
     }
 }


 float MesaDeRestaurante::calculaTotal(){
     float total = 0;
        for(int i = 0; i < QUANT; i++){
            total += pedidos[i].getPreco() * pedidos[i].getQuantidade();
        }

    return total;

 }

 void MesaDeRestaurante::exibeConta(){
     for(int i = 0; i < QUANT; i++){
         if(pedidos[i].getQuantidade() > 0){
             std::cout << pedidos[i].getNumero() <<  " - " 
                       << pedidos[i].getDescricao() << " - "
                       << pedidos[i].getQuantidade() << " - "
                       << pedidos[i].getPreco() << " - R$"
                       << pedidos[i].getQuantidade() * pedidos[i].getPreco() << std::endl;
         }
     }

     std::cout << "Total: R$ " << calculaTotal() << std::endl << std::endl;

 }