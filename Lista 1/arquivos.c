#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Usuario{
    char cpf[20];
    char nome[60];
    char s_nome[60];
    char endereco[100];
    char telefone[20];
}Usuario;

int main ()
{
    int n;
    char l[240];
    FILE *fp;

    scanf("%d",&n);
    getchar();

    Usuario usuarios[n];

    for (int i = 0; i < n; i++) {
        fgets(usuarios[i].cpf, 20, stdin);
        usuarios[i].cpf[strcspn(usuarios[i].cpf, "\n")] = 0;

        fgets(usuarios[i].nome, 50, stdin);
        usuarios[i].nome[strcspn(usuarios[i].nome, "\n")] = 0;

        fgets(usuarios[i].s_nome, 50, stdin);
         usuarios[i].s_nome[strcspn(usuarios[i].s_nome, "\n")] = 0;

        fgets(usuarios[i].endereco, 100, stdin);
        usuarios[i].endereco[strcspn(usuarios[i].endereco, "\n")] = 0;

        fgets(usuarios[i].telefone, 20, stdin);
        usuarios[i].telefone[strcspn(usuarios[i].telefone, "\n")] = 0;
    }

    fp = fopen("lista.csv","w");
    if(fp > 0)
    {
        fprintf(fp,"CPF,nome,snome,endereco,telefone\n");
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
    if(fp > 0)
    {
        for (int i = 0; i <= n; i++) {

            fgets(l,240,fp);
            printf("%s",l);
        }
        fclose(fp);
    }
        return 0;
}
