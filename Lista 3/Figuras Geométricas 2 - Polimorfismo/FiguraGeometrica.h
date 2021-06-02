#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>
#include <iostream>
class FiguraGeometrica{

    protected:
              std::string nome;
              int tipo;
    public:
          FiguraGeometrica();
          FiguraGeometrica(int);
          virtual float CalcularArea() = 0;
          virtual void LerAtributosArea() = 0;
          std::string getNome();
            
};

#endif
