/*8. Crie uma função capaz de criar a transposta de uma matriz.*/

#include <stdio.h>
void br() { printf("\n"); }

int printaMatriz(int line1[], int line2[], int line3[])
{
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
}

int criaTransposta(int line1[], int line2[], int line3[])
{
    printf("Transposta da matriz:\n");
	for (int i = 0; i < 3; i++)
		printf("%d %d %d\n", line1[i], line2[i], line3[i]);
}

int main()
{
	int line1[3], line2[3], line3[3];

	printf("digite os numeros da linha 1: \n");
	scanf("%d%d%d", &line1[0], &line1[1], &line1[2]);

	printf("digite os numeros da linha 2: \n");
	scanf("%d%d%d", &line2[0], &line2[1], &line2[2]);

	printf("digite os numeros da linha 3: \n");
	scanf("%d%d%d", &line3[0], &line3[1], &line3[2]);

	
    printaMatriz(line1, line2, line3);
    criaTransposta(line1, line2, line3);
}



