
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char nome[60];
    int numero;
    int quant_votos;

} Membros;


int main ()
{
    Membros candidatos [100];

    int quant_cand ,nulos = 0 ,i = 0 ,p = 0 ,x = 0, votos = 0, numero;
    float total_votos = 0,porcen,max_porce = 0;


    scanf("%d",&quant_cand);

    for (i = 0; i < quant_cand; i++) {
        candidatos[i].quant_votos = 0;
        scanf("%d",&candidatos[i].numero);

        fgets(candidatos[i].nome,60,stdin);
        candidatos[i].nome[strcspn(candidatos[i].nome,"\n")] = '\0';

    }

    while(1) {

        scanf("%d",&numero);

        if(numero <= 0)
            break;

        for(i = 0; i < quant_cand; i++) {
            if(candidatos[i].numero == numero) {
                candidatos[i].quant_votos++;
                x++;
            }
            else
            {
                continue;
            }

        }

        if(x <= 0)
            nulos++;

        x = 0;
        total_votos++;
    }

    for (p = 0; p < quant_cand; p++) {
        porcen = candidatos[p].quant_votos * 100 / total_votos;

        if(porcen > max_porce)
            max_porce = porcen;
    }

    for(int p = 0; p < quant_cand; p++) {
        porcen = candidatos[p].quant_votos * 100 / total_votos;

        if(porcen == max_porce)
            printf("%.2f - %d - %s VENCEDOR\n",porcen,candidatos[p].numero,candidatos[p].nome);
        else
            printf("%.2f - %d - %s\n",porcen,candidatos[p].numero,candidatos[p].nome);
    }

            printf("%.2f - Nulos",nulos * 100 / total_votos);
}