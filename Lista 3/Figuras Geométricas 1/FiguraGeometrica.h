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
          float CalcularArea();
          void LerAtributosArea();
          std::string getNome();
            
};

#endif
