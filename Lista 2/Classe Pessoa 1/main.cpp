#include "Pessoa.h"
#include <iostream>

using namespace std;

int main()
{
    Pessoa pessoa[2];

    for(int i = 0; i < 2; i++)
    {
        getline(cin, pessoa[i].nome);
        cin >> pessoa[i].idade;
        getchar();
        getline(cin, pessoa[i].telefone);
        cout << pessoa[i].nome << ", " << pessoa[i].idade << ", " << pessoa[i].telefone << endl;

    }
}