#include <iostream>
#include "invoice.h"

using namespace std;

int main()
{   
   Invoice invoice[2];

    for(int i = 0; i < 2; i++)
    {
         cin >> invoice[i].numero;
         getchar();
         getline (cin, invoice[i].descricao);
         cin >> invoice[i].qtd; 
         cin >> invoice[i].preco;

         if (invoice[i].qtd < 0)
            invoice[i].qtd = 0;
            
         if (invoice[i].preco < 0)
            invoice[i].preco = 0.0;
         
           
    }

    for(int i = 0; i < 2; i++)
    {

        cout << invoice[i].numero << " - " << invoice[i].descricao << " - " << invoice[i].qtd << " - " << invoice[i].preco << " - " ;
        cout << invoice[i].getInvoiceAmount() << endl;

    }
  

}