#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dados
{
    char nome [60];
    int idade;
    int chutes;
    int gols;

}dados;


int main ()
{
    dados j1 ,j2;
    int i ,j;


    fgets(j1.nome,50,stdin);
    j1.nome[strcspn(j1.nome,"\n")] = '\0';

    scanf("%d%d%d",&j1.idade,&j1.chutes,&j1.gols);
    getchar();

    fgets(j2.nome,50,stdin);
    j2.nome[strcspn(j2.nome,"\n")] = '\0';

    scanf("%d%d%d",&j2.idade,&j2.chutes,&j2.gols);
    getchar();


    if(j2.chutes / j2.gols < j1.chutes / j1.gols)
        printf("%s (%d)",j2.nome,j2.idade);
    else
        printf("%s (%d)",j1.nome,j1.idade);

}
