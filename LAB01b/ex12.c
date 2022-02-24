/*12. Faça uma função que retorne a posição de um dado caracter dentro de uma string.*/

#include <stdio.h>
#pragma warning(disable : 4996)


char retornaChar(char str_[], char letra) {

    for (int i = 0; i < 16; i++) {
        if (str_[i] == letra) {
            printf("posicao da letra : %d", i);
        }
    }
}

int main() {
    char str[16] = "abcdefghijklmno";
    char letraDesejada;
    
    printf("Digite a letra desejada : ");
    scanf("%c", &letraDesejada);

    retornaChar(str, letraDesejada);
}