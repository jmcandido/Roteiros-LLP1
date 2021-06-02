#include "Controle.h"

void ControleDeGastos::setDespesa(Despesa d, int pos)
{   
    this -> despesas[pos] = d;
}

Despesa ControleDeGastos::getDespesa(int pos)
{
   return despesas[pos];
}

float ControleDeGastos::calculaTotalDeDespesas()
{
    float total = 0;

    for(int i = 0; i < 100; i++)
    {
        total += despesas[i].getValor();
    }

    return total;
    
}

float ControleDeGastos::calculaTotalDeDespesas(std::string tipo)
{   
    float total_tipo = 0;

    for(int i = 0; i < 100; i++)
    {
        if(despesas[i].getTipoDeGasto() == tipo)
        {
            total_tipo += despesas[i].getValor();
        }
    }

    return total_tipo;
}

bool ControleDeGastos::existeDespesaDoTipo(std::string tipo)
{
     for(int i = 0; i < 100; i++)
     {
         if(despesas[i].getTipoDeGasto() == tipo)
         {   
             return true;
         }
     }

     return false;
}