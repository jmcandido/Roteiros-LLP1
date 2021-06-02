#include <iostream>
#include "Pessoa.h"

using namespace std;

int main()
{
    int N;
    string nome, telefone;
    string rua, numero, bairro, cidade, estado, cep;
    Endereco end;
    cout << "Quantas pessoas deseja cadastrar: " << endl;
    cin >> N;
    getchar();

    Pessoa v[N];

    for(int i = 0 ; i < N; i++) {
        getline(cin, nome);
        getline(cin, telefone);
        getline(cin, rua);
        getline(cin, numero);
        getline(cin, bairro);
        getline(cin, cidade);
        getline(cin, estado);
        getline(cin,cep);

        end = Endereco(rua, numero, bairro, cidade, estado, cep);

        v[i] = Pessoa(nome, end, telefone);

        cout << v[i].toString() << endl << endl;
    }

}