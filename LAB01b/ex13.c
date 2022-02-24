/*13. Faça um rotina que remova um caracter de uma 
string do tipo char Str[100], dada a posição do caracter.*/

#include <stdio.h>
#pragma warning(disable : 4996)

int retornaIndex(char str_[], int posicao) {

    for (int i = 0; i < 16; i++) {
        if (str_[i] == posicao) {
            return i;
            break;
        }
    }
}

void removeChar(char str_[], int posicao) {
    memmove(&str_[posicao], &str_[posicao + 1], strlen(str_) - posicao);

    printf("%s", str_);
}

int main() {
    char str[100] = "abcdefghijklmno";
    int posicaoDesejada;
    
    printf("Digite a posicao desejada : ");
    scanf("%d", &posicaoDesejada);

    removeChar(str, posicaoDesejada);
}