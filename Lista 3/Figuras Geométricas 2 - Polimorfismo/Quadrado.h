#ifndef QUADRADRO_H
#define QUADRADRO_H
#include "FiguraGeometrica.h"

class Quadrado: public FiguraGeometrica{
    
    private:
             double lado;
    public: 
            Quadrado();
            Quadrado(int);
            float CalcularArea();
            void LerAtributosArea();
};

#endif