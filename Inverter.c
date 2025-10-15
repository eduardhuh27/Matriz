#include <stdio.h>

int inverter (int lin,int col, int matriz[lin][col], int c1, int c2);
void exibir(int linha,int coluna, int mt [linha][coluna]);

void main() {
    int matriz[3][6]={{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18}};
    int c1, c2;
    
    printf("Entre com o intervalo:");
    scanf("%d %d",&c1,&c2);
    
    inverter(3,6,matriz,c1-1,c2-1);
}
int inverter (int lin,int col, int matriz[lin][col], int c1, int c2)
{
    int i,j,temp,valor1=c1,valor2=c2;
    
    for(i=0;i<lin;i++)
    {
        c1=valor1;
        c2=valor2;
        for(c1;c1<c2;c1++,c2--)
        {
            temp=matriz[i][c1];
            matriz[i][c1]=matriz[i][c2];
            matriz[i][c2]=temp;
        }
    }
    exibir(lin,col,matriz);
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
