/*1. Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros. 
Ao final da leitura o programa deverá imprimir o número da linha que contém o menor 
dentre todos os números lidos.*/
#include <stdio.h>

int main()
{
    int k, i, j, menor;
    printf("Digite a dimensão da matriz quadrada:\n");
    scanf("%d", &k);

    int a[k][k];

    for ( i = 0; i < k; i++)
    {
        printf("Digite os valores para a %d linha \n", i+1);
        for ( j = 0; j < k; j++)
        {
            scanf("%d", &a[i][j]);
        }
        menor = a[0][0];
    }
    printf("A matriz digitada é\n");
    for ( i = 0; i < k; i++)
    {
        for ( j = 0; j < k; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < k; i++)
    {
        for ( j = 0; j < k; j++)
        {
            if (a[i][j] < menor)
                menor = a[i][j];
        }
    }
    printf("Menor número da matriz: %d\n", menor);    
}