#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.h"

class TrabalhadorPorHora: public Trabalhador{

        private:
                 double ValordaHora;
        public:
                TrabalhadorPorHora();
                TrabalhadorPorHora(std::string, double);
                double CalcularPagamentoSemanal(int);

};

#endif