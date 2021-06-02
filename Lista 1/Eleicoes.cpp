#include <iostream>
#include <cstring>
#include <string.h>


using namespace std;


typedef struct{

    char descricao[50];

    float peso;

    char tipo;

} Movel;

int main ()
{
    Movel t_moveis[50];

    int n,cont_s = 0,mais_pesado = 0,cont_real = 0,posicao;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
         cin.ignore();

        cin.getline(t_moveis[i].descricao[50]);
        cin >> t_moveis[i].peso;
        cin >> t_moveis[i].tipo;

        if(t_moveis[i].tipo == 's' && t_moveis[i].peso > 10)
        {
            cont_s++;
        }

        if(t_moveis[i].peso > mais_pesado)
        {
            mais_pesado = t_moveis[i].peso;
        }
    }


    for(int i = 0; i < n; i++)
    {
        if(t_moveis[i].peso == mais_pesado)
        {
           cout << "Mais pesado: " << t_moveis[i].descricao << "\n";
        }
    }
           cout << "Tipo 's' acima de 10Kg:" << cont_s << "\n";
            printf("%d",cont_real);

}
