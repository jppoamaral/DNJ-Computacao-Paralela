/*9 Crie uma função capaz de substituir 
todos os números negativos de uma matriz por seu módulo.*/

#include <stdio.h>
#pragma warning(disable : 4996)

//exercicio 9

int main() {
    int matriz_[3][3], i, j;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            printf("\nElemento[%d][%d] = ", i, j);
            scanf("%d", &matriz_[i][j]);
        }

    printf("--------------------------------");

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            if ((matriz_[i][j]) > 0) {
                printf("\nElemento[%d][%d] = %d\n", i, j, matriz_[i][j]);
            }

            else {
                printf("\nElemento[%d][%d] = %d\n", i, j, (matriz_[i][j]) * -1);
            }
        }
}