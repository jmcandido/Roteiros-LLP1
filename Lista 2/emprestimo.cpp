#include <iostream>

using namespace std;

int main ()
{
    float salario, valor_emprest, n_prest;

    
    cin >> salario >> valor_emprest >> n_prest;

    while(1)
    {   
        if(salario <= 0)
        {
            cin >> salario;
        }

        else if(valor_emprest <= 0)
        {
            cin >> valor_emprest;
        }

        else if(n_prest <= 0)
        {
            cin  >> n_prest;
        }else
            break;
           
    }

        if (valor_emprest / n_prest <= salario * 0.3)
            cout << "Emprestimo pode ser concedido" << endl;
        else
            cout << "Emprestimo nao pode ser concedido" << endl;       
    
}