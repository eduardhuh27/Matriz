#include <stdio.h>

int procurar (int linha, int coluna, int l, int x, float m [linha][coluna]);

void main ()
{
    int linha,coluna,x=9,l=1,resposta;
    float m[3][5]={{1,2,3,4,5},{0,9,3,8,5},{1,7,3,6,5}};
    resposta=procurar (3,5,l,  x, m);
    if(resposta==1)
    {
        printf("O numero foi encontrado.");
    }
}
    int procurar (int linha, int coluna, int l, int x, float m [linha][coluna])
{
    int j;
    
    for(j=0;j<coluna;j++)
    {
        if(x==m[l][j])
        {
            return 1;
        }
    }
    return 0;
    
}
