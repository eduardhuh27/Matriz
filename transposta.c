#include <stdio.h>
    
void transposta (int linha, int coluna, float m[linha][coluna],float mt[coluna][linha]);    
void exibir (int linha,int coluna, float mt [linha][coluna]);
void main() {
    
    float m[5][2]={{1,2},{3,4},{5,6},{7,8},{9,10}};
    float mt[2][5];
    int i=5,j=2;
    transposta (i,j,m,mt);   

}

void transposta (int linha, int coluna, float m[linha][coluna],float mt[coluna][linha])
{
    int i,j;
    
    for(i=0;i<linha;i++)
    {
        for(j=0;j<coluna;j++)
        {
            mt[j][i]=m[i][j];
        }
    }
     exibir (linha,coluna, m);
    exibir (coluna,linha, mt);
}
void exibir(int linha,int coluna, float mt [linha][coluna])
{
    int i,j;
    for(i=0;i<linha;i++)
    {
        for(j=0;j<coluna;j++)
        {
            printf("%1.f ",mt[i][j]);
            
        }
        printf("\n");
    }
    
   
}
