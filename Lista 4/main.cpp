#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"
#define N 2
int main(){
    
    double s, v;
    string n, num;
    
    Conta *conta[N];

    for (int i = 0; i < N; i++){
        getline(cin,n);
        getline(cin, num);
        cin >> s;

        if (i == 0)
            conta[i] = new Conta(n, num, s);
        else
            conta[i] = new ContaEspecial(n, num, s);
        
        cin >> v;
        conta[i]->depositar(v);
        cin >> v;
        conta[i]->sacar(v);
        getchar();


        cout << conta[i]->getNomeCliente() << ", cc: " << conta[i]->getNumeroConta() << ", salario " <<
        conta[i]->getSalarioMensal() << ", saldo disponível: R$ " << conta[i]->saldoTotalDisponivel()
        << endl;

        

    }
}