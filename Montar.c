

#include <stdio.h>

void exibir(int linha,int coluna, float m [linha][coluna]);
void montar(int linha, int coluna,float m [linha][coluna]);

void main()
{
    int i=5;
    float m[5][5];

    montar(i,i,m);
}

void montar(int linha, int coluna,float m [linha][coluna])
{
    int i,j;

    for( i=0; i<linha; i++)
    {
        for( j=0; j<coluna; j++)
        {
            m[i][j]= i+1+j;
        }
    }
    exibir(linha,coluna, m);
}

void exibir(int linha,int coluna, float m [linha][coluna])
{
    int i,j;
    for( i=0; i<linha; i++)
    {
        for( j=0; j<coluna; j++)
        {
            printf("%1.f ",m[i][j]);
            
        }
        printf("\n");
    }
}
