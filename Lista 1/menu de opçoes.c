#include <stdio.h>
#include <stdlib.h>

void menu ()
{
    for (int i = 1; i <= 4; i++) {
        if(i == 4)
            printf("%d - Sair\n",i);
        else
            printf("%d - Item %d\n",i,i);
    }
}
int main()
{
    int valor_opcao;

    while(1) {
        scanf("%d",&valor_opcao);

        if (valor_opcao <= 0 || valor_opcao > 4) {
             menu ();
             printf("Opcao %d Invalida\n",valor_opcao);

        }else if(valor_opcao == 4) {
             menu();
             printf("Sair\n", valor_opcao);
            break;
        }else
        {
             menu ();
            printf("Item %d\n", valor_opcao);
        }
    }

    return 0;
}



