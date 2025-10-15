#include <stdio.h>

int simetriaV (int lin,int col, int matriz[lin][col]);
void exibir(int linha,int coluna, int mt [linha][coluna]);

void main() {
    int matriz[3][6]={{1,2,3,3,2,0},{7,8,9,9,8,7},{13,14,15,15,14,13}};
    int resposta;   
    resposta=simetriaV(3,6,matriz);
    if(!resposta)
    {
         printf("Nao e simetrica verticalmente");
    }
    else
    {
        printf("E simetrica verticalmente");
    }
}
int simetriaV (int lin,int col, int matriz[lin][col])
{
    
    int i,j,x=lin-1,y=col-1;
    for(j=0;j<y;j++,y--)
    {
        for(i=0;i<lin;i++,x--)
        {
            printf("%d %d \n",matriz[i][j],matriz[i][y]);
            if(matriz[i][j]!=matriz[i][y])
            {
                return 0;
            }
        }
    }
    exibir(lin,col,matriz);
    return 1;
}
void exibir(int linha,int coluna, int mt [linha][coluna])
{
    int i,j;
    for(i=0;i<linha;i++)
    {
        for(j=0;j<coluna;j++)
        {
            printf("%1.d ",mt[i][j]);       
        }
        printf("\n");
    }   
}
