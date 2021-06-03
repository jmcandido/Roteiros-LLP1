#include <iostream>
#include "Invoice2.h"

using namespace std;

int main(){
       
    int numero, qtd;
    string descricao;
    float preco;
        
        for( int i = 0 ; i < 2; i++) {
            
         cin >> numero;
         getchar();
         getline (cin, descricao);
         cin >> qtd; 
         cin >> preco;
         Invoice invoice(numero, descricao, qtd, preco);
         invoice.print();

        }
    
        return 0;
}
