#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Movel
{

    char descricao[50];

    float peso;

    char tipo;

} Movel;

int main ()
{

    int n,cont_s = 0,mais_pesado = 0,cont_real = 0;

    scanf("%d",&n);
    getchar();
    Movel moveis[n];

    for(int i = 0; i < n; i++)
    {
        fgets(moveis[i].descricao,50,stdin);
        moveis[i].descricao[strcspn(moveis[i].descricao,"\n")] = '\0';


        scanf("%f",&moveis[i].peso);
        getchar();

        scanf("%c",&moveis[i].tipo);
        getchar();

        if(moveis[i].tipo == 's' && moveis[i].peso > 10)
        {
            cont_s++;
        }

        if(strstr(moveis[i].descricao, "Real") != NULL)
        {
            cont_real++;
        }


        if(moveis[i].peso > mais_pesado)
        {
            mais_pesado = moveis[i].peso;
        }

    }

    printf("Tipo 's' acima de 10Kg: %d\n",cont_s);
    printf("Termina em \"Real\": %d\n",cont_real);

    for(int i = 0; i < n; i++)
    {
        if(moveis[i].peso == mais_pesado)
        {
            printf("Mais pesado: \"%s\"\n",moveis[i].descricao);
        }
    }

}
