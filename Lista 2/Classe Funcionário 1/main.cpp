#include <iostream>
#include "Funcionario.h"

using namespace std;

int main ()
{
    int n;

    cin >> n;
    getchar();

    Funcionario funcionario;

    while(n--){

        getline(cin, funcionario.nome);
        getline(cin, funcionario.sobrenome);
        cin >> funcionario.salario;
        getchar();
        cout << funcionario.nome << " " << funcionario.sobrenome << " - " << funcionario.salario  << " - " << funcionario.getSalarioAnual() << endl;
    }
}
