#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct veiculos
{

    char modelo[60];
    char marca[60];
    int ano;
    float preco;

}Carros;

int main ()
{
    Carros  c1, c2;

    fgets(c1.modelo,60,stdin);
    c1.modelo[strcspn(c1.modelo, "\n")] = '\0';

    fgets(c1.marca,60,stdin);
    c1.marca[strcspn(c1.marca, "\n")] = '\0';
    scanf("%d %f",&c1.ano,&c1.preco);

    getchar();

    fgets(c2.modelo,60,stdin);
    c2.modelo[strcspn(c2.modelo, "\n")] = '\0';

    fgets(c2.marca,60,stdin);
    c2.marca[strcspn(c2.marca, "\n")] = '\0';
    scanf("%d %f",&c2.ano,&c2.preco);

    if (c1.ano < c2.ano)
    {
        printf("%s %s",c1.marca,c1.modelo);
    }
    else if(c1.preco < c2.preco)
    {
        printf("%s %s",c1.marca,c1.modelo);
    }
    else
    {
        printf("%s %s",c2.marca,c2.modelo);
    }

    return 0;
}
