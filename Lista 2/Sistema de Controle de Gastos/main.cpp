#include <iostream>
#include "Despesa.h"
#include "Controle.h"

using namespace std;

int main ()
{
    string nome, tipo;
    float valor;
    int N, i;
    
    cin >> N;
    getchar();

    ControleDeGastos gastos;
    Despesa despesas;

    for(i = 0; i < N; i++)
    {
        getline(cin,nome);
        despesas.setNome(nome);
        cin >> valor;
        getchar();
        despesas.setValor(valor);
        getline(cin, tipo);
        despesas.setTipoDeGasto(tipo);
        gastos.setDespesa(despesas, i);        
    }

    getline(cin, tipo);
   
    if (gastos.existeDespesaDoTipo(tipo))
    {   
        for(int i = 0; i < N; i++)
        {   
          if(gastos.getDespesa(i).getTipoDeGasto() == tipo)
          {
              cout << gastos.getDespesa(i).getNome() << ", R$ " << gastos.getDespesa(i).getValor() << endl;
          }
        }
    }else
    {
            cout << "Nenhuma despesa do tipo especificado" << endl;
    }

    cout << gastos.calculaTotalDeDespesas(tipo) << "/" << gastos.calculaTotalDeDespesas() << endl;
}