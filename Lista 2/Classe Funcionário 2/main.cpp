#include "Funcionario2.h"
#include <iostream>

using namespace std;

int main ()
{
    string nome, sobrenome;
    int n;
    float salario;
    float reajuste;

    cin >> n;
    getchar();


    for (int i = 0; i < n; i++){
         getline(cin, nome);
         getline(cin, sobrenome);
         cin >> salario;
         getchar();
         Funcionario funcionarios(nome, sobrenome, salario);

         funcionarios.print();
         funcionarios.aumentaSalario(0.1);
         cout << funcionarios.getSalarioAnual() << endl;
    }

    return 0;

}