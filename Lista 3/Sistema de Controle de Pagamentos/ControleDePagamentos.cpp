#include "ControleDePagamentos.h"

  void ControleDePagamentos::setPagamento(Pagamento p, int index){

      this -> pagamentos[index] = p;
  }

  Pagamento ControleDePagamentos::getPagamento(int pos){

      return pagamentos[pos];

  }


  float ControleDePagamentos::calculaTotalDePagamentos(){

    float total = 0;

    for(int i = 0; i <  100; i++){

        total += pagamentos[i].getValorPagamento();
    }

    return total;

  }

  int  ControleDePagamentos::getIndexFuncionario(std::string nome){

   for(int i = 0; i < 100; i++){

       if (pagamentos[i].getNomeDoFuncionario().find(nome) != std::string::npos)
       {
           return i;
       }
   }
           return -1;   
  }
