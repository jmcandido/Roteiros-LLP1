#include <stdio.h>
#include <stdlib.h>

typedef struct Data
{
    int ano,mes,dia;
}s_data;

int conferir (s_data d1, s_data d2)
{
    if(d1.ano == d2.ano && d1.mes == d2.mes && d1.dia == d2.dia)
    {
        return 0;
    }
    else if ((d1.ano == d2.ano && d1.mes < d2.mes) || (d2.ano < d2.ano))
    {
        return 1;
    }
    else if(d1.ano == d2.ano && d1.mes == d2.mes && d1.dia < d2.dia)
    {
        return 1;
    }

        return -1;

}

int main()
{
    s_data d1,d2;

    scanf("%d %d %d",&d1.dia,&d1.mes,&d1.ano);
    scanf("%d %d %d",&d2.dia,&d2.mes,&d2.ano);

    if(conferir(d1,d2) == 1)
    {
        printf("Pessoa 1 é mais velha");
    }else if(conferir(d1,d2) == -1)
    {
        printf("Pessoa 2 é a mais velha");
    }

}
