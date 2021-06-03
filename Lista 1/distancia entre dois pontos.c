#include <stdio.h>
#include <stdlib.h>

struct dados
{
    char nome [60];
    int idade;
    int chutes;
    int gols;

};


int main ()
{
    struct dados j1, j2;

    fgets(j1.nome,60,stdin);
    scanf("%d",&j1.idade);
    scanf("%d",&j1.chutes);
    scanf("%d",&j1.gols);

    fgets(j2.nome,60,stdin);
    scanf("%d",&j2.idade);
    scanf("%d",&j2.chutes);
    scanf("%d",&j2.gols);

    if(j2.gols > j1.gols) {
        printf("%s (%d)",j2.nome,j2.idade);
    }else
    {
        printf("%s(%d)",j1.nome,j1.idade);
    }

}
