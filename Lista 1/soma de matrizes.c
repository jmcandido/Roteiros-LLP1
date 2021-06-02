#include <stdio.h>
#include <stdlib.h>

void soma (int matriz_1[30][30],int matriz_2[30][30],int matriz_3 [30][30],int m, int n)
{
    int l,c;

    for (l = 0; l < m;l++){
        for (c = 0; c < n; c++)
        {
             matriz_3[l][c] = matriz_1[l][c] + matriz_2[l][c];
             printf("%d ",matriz_3[l][c]);
        }
             printf("\n");
    }
}

int main ()
{
    int l,c,n,m;
    int matriz_1[30][30];
    int matriz_2[30][30];
    int matriz_3[30][30];

    scanf("%d%d",&m,&n);

    for(l = 0 ; l < m; l++)
    {
        for(c = 0; c < n; c++)
        {
            scanf("%d",&matriz_1[l][c]);
        }
    }

    for(l = 0 ; l < m; l++)
    {
        for(c = 0; c < n; c++)
        {
            scanf("%d",&matriz_2[l][c]);
        }
    }

     soma(matriz_1,matriz_2,matriz_3,m,n);

     return 0;
}
