#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H
#include "Trabalhador.h"

class TrabalhadorAssalariado : public Trabalhador{

    public:
            TrabalhadorAssalariado();
            TrabalhadorAssalariado(std::string, double);
            double CalcularPagamentoSemanal();
              
};

#endif