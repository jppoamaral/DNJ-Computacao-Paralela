/*11. Crie uma função capaz de somar os elementos das linhas L1 e L2 
de uma matriz. O resultado deve ser colocado na linha L2. 
Faça o mesmo com a multiplicação.*/

#include <stdio.h> 
#pragma warning(disable : 4996)

void br() { printf("\n"); }

int main()
{
	int L1[3], L2[3];
	int nL2[3];
	printf("digite os numeros da linha 1: ");
	scanf("%d %d %d", &L1[0], &L1[1], &L1[2]);

	printf("digite os numeros da linha 2: ");
	scanf("%d %d %d", &L2[0], &L2[1], &L2[2]);

	printf("Sua matriz esta assim:\n");
	for (int i = 0; i < 3; i++)
		printf("%d ", L1[i]);
	br();
	for (int i = 0; i < 3; i++)
		printf("%d ", L2[i]);
	br();

	printf("\n---SOMA DAS LINHAS---\n");
	for (int i = 0; i < 3;i++)
		nL2[i] = L1[i] + L2[i];
	printf("Matriz atualizada:\n");
	for (int i = 0; i < 3; i++)
		printf("%d ", L1[i]);
	br();
	for (int i = 0; i < 3; i++)
		printf("%d ", nL2[i]);
	br();

	printf("\n---MULTIPLICACAO DAS LINHAS---\n");
	for (int i = 0; i < 3;i++)
		nL2[i] = L1[i] * L2[i];

	printf("Matriz atualizada:\n");
	for (int i = 0; i < 3; i++)
		printf("%d ", L1[i]);
	br();
	for (int i = 0; i < 3; i++)
		printf("%d ", nL2[i]);
	br();
}