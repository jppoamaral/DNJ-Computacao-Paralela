/*14. Faça uma rotina que insira um caracter em uma 
string do tipo char Str[100], dada a posição do caracter.*/

#include <stdio.h>
#pragma warning(disable : 4996)

//exercicio 14
//14. Faça uma rotina que insira um caracter em uma string do tipo char Str[100], dada a posição do caracter.

void removeChar(char str_[], int posicao, char caracter[]) {
    char tempStr[100];
    memmove(&tempStr[0], &str_[posicao], strlen(str_) - posicao);
    strcat(caracter, tempStr);
    memmove(&str_[posicao], &caracter[0], strlen(str_) + posicao);

    printf("%s", str_);
}

int main() {
    char str[100] = "abcdefghijklmno";
    int posicaoDesejada;
    char caracter [50] = "x";
    
    printf("Digite a posicao desejada : ");
    scanf("%d", &posicaoDesejada);

    removeChar(str, posicaoDesejada, caracter);
}