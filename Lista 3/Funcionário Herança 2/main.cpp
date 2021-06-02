#include "Consultor.h"
#include <iostream>
#define P 0.1
using namespace std;

int main(){

    string m, n;
    double s;
    int N = 4;
    Funcionario f[N];
    Consultor c[N];

    for(int i = 0; i < N; i++){
        
        getline(cin, m);
        getline(cin, n);
        cin >> s;
        getchar();

        if((i + 1) % 2 != 0){
            f[i].setMatricula(m);
            f[i].setNome(n);
            f[i].setSalario(s);
        }else{
            c[i].setMatricula(m);
            c[i].setNome(n);
            c[i].setSalario(s);
        }
   
    }

    for (int i = 0; i < N; i++){
         if ((i + 1) % 2 != 0)
             cout << f[i].getMatricula() << " - " << f[i].getNome() << " - R$ " << f[i].getSalario() << endl;
         else
             cout << c[i].getMatricula() << " - " << c[i].getNome() << " - R$ " << c[i].getSalario(P) << endl;
    }
   
}