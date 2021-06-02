#ifndef DESPESA_H
#define DESPESA_H
#include <iostream>


class Despesa
{
     private:
            std::string nome;
            float valor;
            std::string tipoDeGasto;
     public:
          Despesa();
          void setNome(std::string);
          std::string getNome();
          void setValor(float);
          float getValor();
          void setTipoDeGasto(std::string);
          std::string getTipoDeGasto();
};

#endif