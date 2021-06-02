#include <stdio.h>
#include <stdlib.h>

int verifica (int l, int c, int m1[l][c],int t_nulos)
{

    if ((t_nulos * 100 / (l * c)) > 70.0)
        return 1;
    else
        return 0;
}

int main ()
{
    int t_nulos;
    int l,c;
    int m,n;
    int m1[10][10];

    scanf("%d %d", &m,&n);

    for( l = 0; l < m; l++)
    {
        for(c = 0 ; c < n; c++)
        {
            scanf("%d", &m1[l][c]);

            if(m1[l][c] == 0)
            {
                t_nulos++;
            }
        }
    }

    (verifica(l,c,m1[l][c],t_nulos)== 1 ? printf("A matriz é esparsa"): printf("A matriz não é esparsa"));

}
