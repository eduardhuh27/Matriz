#include<stdio.h>

void matrizTransposta(int linha, int coluna, float matriz[linha][coluna], float matrizT[coluna][linha]);
void exibirMatriz(int linha, int coluna, float matriz[linha][coluna]);

void main()
{
    float m[2][3] = {{1, 2, 3}, {4, 5, 6}};
    float mt[3][2];
    int c = 3, l = 2;

    exibirMatriz(l, c, m);
    printf("\n");

    matrizTransposta(l, c, m, mt);

    exibirMatriz(c, l, mt);
}

void matrizTransposta(int linha, int coluna, float matriz[linha][coluna], float matrizT[coluna][linha])
{
    int i, j;

    for(i = 0; i < linha; i++)
    {
        for(j = 0; j < coluna; j++)
        {
            matrizT[j][i] = matriz[i][j];
        }
    }
}

void exibirMatriz(int linha, int coluna, float matriz[linha][coluna])
{
    int i, j;

    for(i = 0; i < linha; i++)
    {
        for(j = 0; j < coluna; j++)
        {
            printf("%.1f  ", matriz[i][j]);
        }
        printf("\n");
    }
}
