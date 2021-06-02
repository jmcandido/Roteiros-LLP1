#include "Quadrado.h"
#include "Retangulo.h"
#include "Triangulo.h"
#include "Circulo.h"

using namespace std;

int main(){

    int tipo;
    Quadrado q;
    Retangulo r;
    Triangulo t;
    Circulo c;

    do{
        cin >> tipo;

        if (tipo == 0)
        {
            break;

        }else if (tipo == 1){

            q = Quadrado(tipo);
            q.lerAtributosArea();
            cout << q.getNome() << " de área " << q.calcularArea() << endl;  

        }else if (tipo == 2){

            r = Retangulo(tipo);
            r.lerAtributosArea();
            cout << r.getNome()<< " de área " << r.calcularArea() << endl;

        }else if (tipo == 3){

            t = Triangulo(tipo);
            t.lerAtributosArea();
            cout << t.getNome()<< " de área " << t.calcularArea() << endl;
            
        }else if (tipo == 4){

            c = Circulo(tipo);
            c.lerAtributosArea();
            cout << c.getNome()<< " de área " << c.calcularArea() << endl;
        }

    }while(tipo != 0);


}