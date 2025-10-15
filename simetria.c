#include <stdio.h>s

void exibir(int linha,int coluna, float m [linha][coluna]);
void montar(int linha, int coluna,float m [linha][coluna]);
int simetria (int linha, int coluna, float m [linha][coluna]);

void main()
{
    int i=5, resposta;
    float m[5][5];

    montar(i,i,m);
    resposta=simetria (i,i,m);
    if(resposta)
    {
        printf("E simetrica");
    }
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
            printf(" %1.f ",m[i][j]);
            
        }
        printf("\n");
    }
}

int simetria (int linha, int coluna, float m [linha][coluna])
{
    int i ,j;
    
    if(linha!=coluna)
    {
        return 0;
    }
    for(i=0;i<linha;i++)
    {
        for(j=i+1;j<coluna;j++)
        {
            if(m[i][j]!=m[j][i])
            {
                return 0;
            }
        }
    }

    return 1;
}

#include <stdio.h>

int vetor (int coluna, int vet[],int linha,float m[linha][coluna]);

void main()
{
    float m[3][4]={{3,1,2,4},{5,6,7,8},{9,10,11,12}};
    int vet[10];
    
    vetor(4,vet,3,m);

}

int vetor   (int coluna, int vet[],int linha,float m[linha][coluna])
{
    
    int i,j;
    
    for(i=0;i<linha;i++)
    {
        vet[i]=0;
        for(j=0;j<coluna;j++)
        {
            vet[i]+=m[i][j];
        }
       // printf("%d ",vet[i]);
    }
