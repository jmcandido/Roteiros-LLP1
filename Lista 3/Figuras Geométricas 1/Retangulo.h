
#ifndef RETANGULO_H
#define RETANGULO_H
#include "FiguraGeometrica.h"

class Retangulo: public FiguraGeometrica{
    
    private:
             double comprimento, largura;
    public:
            Retangulo();
            Retangulo(int);
            float calcularArea();
            void lerAtributosArea();
};

#endif