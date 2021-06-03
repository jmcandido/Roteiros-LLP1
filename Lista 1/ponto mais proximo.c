#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Ponto
{
    int x;
    int y;

}t_ponto;

float calc_d (t_ponto p1, t_ponto p2)
{
    return sqrt( pow(p2.x-p1.x,2) + pow(p2.y-p1.y, 2));
}

int main () {

    int n , i_menor_d = 0, i;
    t_ponto P;
    float menor_d, dist;

    scanf("%d %d",&P.x,&P.y);

    scanf("%d",&n);

    t_ponto pontos[n];

    for (i = 0; i < n; i++) {
        scanf("%d %d", &pontos[i].x,&pontos[i].y);
    }

    for ( i = 0; i < n; i++) {
         dist = calc_d(pontos[i],P);

        if(i == 0)
            menor_d = dist;
        else if(dist < menor_d)
        {
            menor_d = dist;
             i_menor_d = i;
        }

    }

    printf("Ponto mais perto eh (%d, %d)\n", pontos[i_menor_d].x, pontos[i_menor_d].y);

    return 0;

}
