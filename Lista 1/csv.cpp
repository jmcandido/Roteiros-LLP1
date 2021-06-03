#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

typedef struct Usuario{
    string cpf;
    string nome;
    string s_nome;
    string endereco;
    string telefone;
}Usuario;

int main ()
{
    int n;
    char l[240];
    FILE *fp;

    cin >> n;

    Usuario usuarios[n];

    for (int i = 0; i < n; i++) {

        getline(cin, usuarios[i].cpf);
        getline(cin, usuarios[i].nome);
        getline(cin, usuarios[i].s_nome);
        getline(cin, usuarios[i].endereco);
        getline(cin, usuarios[i].telefone);
        
    }

    fp = fopen("lista.csv","w");

    if (fp > 0) {
        fprintf(fp,"CPF,nome,snome,endereço,telefone\n");
        for (int i = 0; i < n; i++) {
            fprintf(fp, "%s,%s,%s,%s,%s\n", usuarios[i].cpf,
             usuarios[i].nome,
             usuarios[i].s_nome,
             usuarios[i].endereco,
             usuarios[i].telefone);
        }
        fclose(fp);
    }

    fp = fopen("lista.csv","r");
    if (fp > 0) {

        for (int i = 0; i <= n; i++) {

            fgets(l,240,fp);
            printf("%s",l);
        }
        fclose(fp);
    }
        return 0;
}
