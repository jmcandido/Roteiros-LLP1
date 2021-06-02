#include "ControleDePagamentos.h"
#include "Pagamento.h"
#include <iostream>

using namespace std;

int main (){

    
    float valor;
    string nome;
    bool NomeExiste = false;

    int N;

    cin >> N;
    getchar();

    ControleDePagamentos controle;
    Pagamento pagamentos;


    for(int i = 0; i < N; i++){

        cin >> valor;
        pagamentos.setValorPagamento(valor);
        getchar();
        getline(cin,nome);
        pagamentos.setNomeDoFuncionario(nome);
        controle.setPagamento(pagamentos,i);
    }

    getline(cin,nome);

    for(int i = 0; i < N; i++){
        
        if( controle.getIndexFuncionario(nome) == i)
        {   
            cout << controle.getPagamento(i).getNomeDoFuncionario() << ": R$ ";
            cout << controle.getPagamento(i).getValorPagamento() << endl;
            NomeExiste = true;
        }
    }

    if(!NomeExiste)
    {
        cout << nome << " não encontrado(a)";
    }
   
    cout << "Total: R$ " << controle.calculaTotalDePagamentos() << endl;

}