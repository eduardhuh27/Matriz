#include <stdio.h>

int totalmes (int mes,int coluna, float m[mes][coluna]);
int total (int linha,int coluna,float m[linha][coluna]);
void montar(int linha, int coluna,float m [linha][coluna]);
void exibir(int linha,int coluna, float m [linha][coluna]);
int totalfunc (int linha,int coluna,int funcio,float m[linha][coluna]);
int melhormes (int linha, int coluna,float m[linha][coluna]);
int piorfunci (int linha,int coluna,float m[linha][coluna]);

void main()
{
    float m[12][10];
    int vet[10];
    int mes,funcio;
    
    printf("Entre com um mes:");
    scanf("%d",&mes);
    
    printf("Entre com um id de funcionario:");
    scanf("%d",&funcio);
    
    montar(12,10,m);
    printf("Total:%d",total(12,10,m));
    printf("\nTotal do mes:%d",totalmes(mes-1,10,m));
    printf("\nTotal do funcionario:%d",totalfunc(12,10,funcio-1,m));
    printf("\nMelhor mes:%d",melhormes(12,10,m));
    printf("\nPior funcionario:%d",piorfunci(12,10,m));
}

int total (int linha,int coluna,float m[linha][coluna])
{
    
    int i,j,soma=0;
    
    for(i=0;i<linha;i++)
    {
        for(j=0;j<coluna;j++)
        {
            soma+=m[i][j];
        }
        }
    return soma;
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
int totalmes (int mes,int coluna, float m[mes][coluna])
{
    int j,mensal=0;
    for (j=0;j<coluna;j++)
    {
        mensal+=m[mes][j];
    }
    return mensal;
}
int totalfunc (int linha,int coluna,int funcio,float m[linha][coluna])
{
      int i, soma = 0;

    for(i = 0; i < linha; i++)
    {
        soma += m[i][funcio];
    }

    return soma;
}
int melhormes (int linha, int coluna,float m[linha][coluna])
{
    int i,mes,melhor;
    melhor=totalmes(0,coluna,m);
    for(i=1;i<linha;i++)
    {
        mes=totalmes(i,coluna,m);
        if(melhor<mes)
        {
            melhor=mes;
        }
    }
    return melhor;
}
int piorfunci (int linha,int coluna,float m[linha][coluna])
{
    int j,pior,funcio;
    pior=totalfunc(linha,coluna,0,m);
    for (j=1;j<coluna;j++);
    {
        funcio=totalfunc(linha,coluna,j,m);
        if(pior>funcio)
        {
            pior=funcio;
        }
    }
    return pior;
}
