/*4. Crie um progama capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética. 
Faça isto com string de C e de C++*/

#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
    char nm[2][20], aux[20];
    int i, j;

    for (i = 0; i < 2; i++) {
        printf("\nNome %i: ", i + 1);
        scanf("%s", nm[i]);
    }


    for (i = 1; i < 2; i++) { 
        for (j = 1; j < 2; j++) {
            if (strcmp(nm[j - 1], nm[j]) > 0) {
                strcpy(aux, nm[j - 1]);
                strcpy(nm[j - 1], nm[j]);
                strcpy(nm[j], aux);
            }
        }
    }

    for (i = 0; i < 2; i++)
        printf("\n%s", nm[i]);
}