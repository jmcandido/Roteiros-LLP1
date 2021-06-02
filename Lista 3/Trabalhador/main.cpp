#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"
#include "Trabalhador.h"
#include <iostream>

using namespace std;

int main (){

    int N;
    string nome;
    double salario, valor_hora;


    cin >> N;
    getchar();
    
    int tipo[N];
    int quant_horas[N];

    TrabalhadorAssalariado trab_a[N];
    TrabalhadorPorHora trab_ph[N];


    for(int i = 0; i < N; i++){
    
        cin >> tipo[i];
        getchar();

        getline(cin, nome);

        if(tipo[i] == 1){
            cin >> salario;
            getchar();
            trab_a[i] = TrabalhadorAssalariado(nome,salario);

        }else if(tipo[i] == 2){
            cin >> valor_hora;
            cin >> quant_horas[i];
            getchar();
            trab_ph[i] = TrabalhadorPorHora(nome, valor_hora);
        }

    }

    for (int i = 0; i < N; i++){

        if (tipo[i] == 1){
             cout << trab_a[i].getNome() << " - Semanal: R$ " << trab_a[i].CalcularPagamentoSemanal() << " - Mensal: R$ " << trab_a[i].getSalario() << endl;

        }else if (tipo[i] == 2){
             cout << trab_ph[i].getNome() << " - Semanal: R$ " << trab_ph[i].CalcularPagamentoSemanal(quant_horas[i]) << " - Mensal: R$ " << trab_ph[i].getSalario() << endl;
        }
    }
    
    return 0;
}
