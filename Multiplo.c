#include <stdio.h>

int verificarmulti (int i,int lin ,int col,int matriz[i][col]);
int verificarmulti2 (int lin,int col ,int j,int matriz[lin][j]);
void formarV (int lin,int col, int matriz[lin][col],int vet1[], int vet2[]);
void exibirM(int linha,int coluna, int mt [linha][coluna]);
void exibirv(int vet[],int tamanho);

void main() {
    int matriz[3][4]={{1,2,3,4},{2,4,6,8},{3,6,9,12}};
    int resposta;
    int vet1[3];
    int vet2[4];
    formarV(3,4,matriz,vet1,vet2);
   
}
void formarV (int lin,int col, int matriz[lin][col],int vet1[],int vet2[])
{
    int i,j;
   for(i=0;i<lin;i++)
    {
        vet1[i]=verificarmulti(i,lin,col,matriz);
        // printf("%d\n",vet1[i]);
    }
    for(j=0;j<col;j++)
    {
        vet2[j]=verificarmulti2(lin,col,j,matriz);
         //printf("%d\n",vet2[j]);
    }
    exibirv(vet1,i);
    exibirv(vet2,j);
}
int verificarmulti (int i,int lin, int col,int matriz[lin][col])
{
    int j,cont=0,valor=matriz[i][0];
    for(j=1;j<col;j++)
    {   
        //printf("%d %d\n",valor,matriz[i][j]);
        if(matriz[i][j]%valor==0)
        {
            cont++;
        }
    }
    
    return cont;
}
int verificarmulti2 (int lin,int col, int j,int matriz[lin][col])
{
    int i, cont=0, valor=matriz[0][j];
    for(i=1;i<lin;i++)
    {
        //printf("%d %d\n",valor,matriz[i][j]);
        if(matriz[i][j]%valor==0)
        {
            cont++;
        } 
    }
    return cont;
}

void exibirM(int linha,int coluna, int mt [linha][coluna])
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
void exibirv(int vet[],int tamanho)
{
    int i;
    for(i=0;i<tamanho;i++)
    {
        printf("Vet[%d]:%d ",i,vet[i]);
    }
}
