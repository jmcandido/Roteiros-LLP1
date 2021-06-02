#ifndef CONTROLE_H
#define CONTROLE_H
#include <iostream>
#include "Despesa.h"

class ControleDeGastos
{
     private:
            Despesa despesas[100];
     public:
            void setDespesa(Despesa d, int pos);
            Despesa getDespesa(int pos);
            float calculaTotalDeDespesas();
            float calculaTotalDeDespesas(std::string tipo);
            bool existeDespesaDoTipo(std::string tipo);
          
};  

#endif