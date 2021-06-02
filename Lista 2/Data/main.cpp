#include <iostream>
#include "Data.h"

using namespace std;

int main()
{

    int dia, mes, ano;
    int n;

    cin >> dia >> mes >> ano;

    cin >> n;

    Data d(dia, mes, ano);

    for (int i = 0; i < n; i++)
    {
        d.AvancarDia();
    }

    cout << d.getDia() << "/" << d.getMes() << "/" << d.getAno() << endl;
}