#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"

class Triangulo: public FiguraGeometrica{
    
    private:
             double base, altura;
    public:
            Triangulo();
            Triangulo(int);
            float calcularArea();
            void lerAtributosArea();
};

#endif