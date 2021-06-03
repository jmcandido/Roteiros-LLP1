#include <iostream>

using namespace std;

int main(void) {
    int m, n, valor, qtdZeros = 0;
    cin >> m >> n ;

    int dimensao = m * n;

    for (int i = 0; i < dimensao; i++) {
        cin >> valor;
        if(!valor) qtdZeros++;
    }

    if((double) qtdZeros / dimensao > 0.7)
        cout << "A matriz é esparsa";
    else 
        cout << "A matriz não é esparsa";

    return 0;
}