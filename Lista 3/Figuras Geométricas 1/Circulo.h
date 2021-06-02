#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.h"
#define PI 3.14

class Circulo: public FiguraGeometrica{
    
    private:
             double raio;
    public:
            Circulo();
            Circulo(int);
            float calcularArea();
            void lerAtributosArea();
};

#endif