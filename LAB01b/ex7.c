/*7. Faça um programa que crie um vetor de pessoas. 
Os dados de uma pessoa devem ser armazenados em um variavel do tipo struct. 
O programa deve permitir que o usuário digite o nome de 3 pessoas 
e a seguir imprimi os dados de todas as pessoas. 
A struct deve armazenar os dados de idade, peso e altura.*/

#include <stdio.h>
#pragma warning(disable : 4996)

struct Person
{
	char name[20];
	int age;
	int weight;
	float height;
};

void br() { printf("\n"); }

int main()
{
	struct Person p1 = {"", 0, 0, 0}, 
		p2 = { "", 0, 0, 0 }, 
		p3 = { "", 0, 0, 0 };

	struct Person pessoa[3] = {p1, p2, p3};
	printf("-----DIGITE OS DADOS DAS PESSOAS:-----\n");
	for (int i = 0; i < 3; i++)
	{
		printf("Pessoa %d:\n", i+1);
		printf("Nome: ");
		scanf("%s", &pessoa[i].name);
		printf("Idade: ");
		scanf("%d", &pessoa[i].age);
		printf("Peso: ");
		scanf("%d", &pessoa[i].weight);
		printf("Altura: ");
		scanf("%f", &pessoa[i].height);
		br();
	}
	printf("-----DADOS DE TODAS AS PESSOAS-----\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%d - %s:\n", i + 1, pessoa[i].name);
		printf("Idade: %d\n", pessoa[i].age);
		printf("Peso: %d\n", pessoa[i].weight);
		printf("Altura: %f\n", pessoa[i].height);
		br();
	}
}