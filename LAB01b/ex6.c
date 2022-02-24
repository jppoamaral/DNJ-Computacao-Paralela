/*6. Crie um programa capaz de criar a transposta de uma matriz. 
A matriz deve ser lida de teclado.*/

#include <stdio.h>
#pragma warning(disable : 4996)
void br() { printf("\n"); }

int main()
{
	int line1[3];
	int line2[3];
	int line3[3];

	printf("digite os numeros da linha 1: \n");
	scanf("%d%d%d", &line1[0], &line1[1], &line1[2]);

	printf("digite os numeros da linha 2: \n");
	scanf("%d%d%d", &line2[0], &line2[1], &line2[2]);

	printf("digite os numeros da linha 3: \n");
	scanf("%d%d%d", &line3[0], &line3[1], &line3[2]);

	printf("Sua matriz esta assim:\n");
	for (int i = 0; i < 3; i++)
		printf("%d ", line1[i]);
	br();
	for (int i = 0; i < 3; i++)
		printf("%d ", line2[i]);
	br();
	for (int i = 0; i < 3; i++)
		printf("%d ", line3[i]);
	br();

	printf("Transposta da matriz:\n");
	for (int i = 0; i < 3; i++)
		printf("%d %d %d\n", line1[i], line2[i], line3[i]);
	

}