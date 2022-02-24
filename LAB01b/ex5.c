/*5. Crie um programa  capaz de multiplicar uma 
linha de uma matriz de inteiros por um dado número. 
Faça o mesmo para uma coluna. A matriz deve ser lida de teclado.*/

#include <stdio.h>

int main()
{
	int line1[3];
	int line2[3];
	int line3[3];
	int num;

	printf("digite os numeros da linha 1: \n");
	scanf("%d%d%d", &line1[0], &line1[1], &line1[2]);
	printf("line 1: %d %d %d\n", line1[0], line1[1], line1[2]);

	printf("digite os numeros da linha 2: ");
	scanf("%d%d%d", &line2[0], &line2[1], &line2[2]);
	printf("line 2: %d %d %d\n", line2[0], line2[1], line2[2]);

	printf("digite os numeros da linha 3: ");
	scanf("%d%d%d", &line3[0], &line3[1], &line3[2]);
	printf("line 3: %d %d %d\n", line3[0], line3[1], line3[2]);

	printf("Sua matriz esta assim:\n %d %d %d\n %d %d %d\n %d %d %d\n", 
		line1[0], line1[1], line1[2],
		line2[0], line2[1], line2[2], 
		line3[0], line3[1], line3[2]);

	printf("\ndigite um numero inteiro: ");
	scanf("%d", &num);

	printf("\n------Resultados das Multiplicacoes------\n");

	printf("Line 1: %d %d %d\n", line1[0] * num, line1[1] * num, line1[2] * num);
	printf("Line 2: %d %d %d\n", line2[0] * num, line2[1] * num, line2[2] * num);
	printf("Line 3: %d %d %d\n", line3[0] * num, line3[1] * num, line3[2] * num);

	printf("\nColumn 1: \n%d \n%d \n%d\n", line1[0] * num, line2[0] * num, line3[0] * num);
	printf("\nColumn 2: \n%d \n%d \n%d\n", line1[1] * num, line2[1] * num, line3[1] * num);
	printf("\nColumn 3: \n%d \n%d \n%d\n", line1[2] * num, line2[2] * num, line3[2] * num);
}
