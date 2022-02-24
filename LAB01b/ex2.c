/*2. Escreva um programa que leia 3 notas de um aluno e a média das notas
 dos exercícios realizados por ele. Calcular a média de aproveitamento, 
 usando a fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7. A partir da média, 
 informar o conceito de acordo com a tabela:
 
maior ou igual a 9 	                A
maior ou igual a 7.5 e menor que 9 	B
maior ou igual a 6 e menor que 7.5 	C
maior ou igual a 4 e menor que 6 	D
menor que 4 	                    E*/

#include <stdio.h>

int main()
{
    
    int n1, n2, n3; 
    int matriz[3] = {n1, n2, n3};
    float MA, ME;

    printf("Digite as 3 notas do aluno:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Nota %d:\n", i+1);
        scanf("%d", &matriz[i]);
    }
    n1 = matriz[0];
    n2 = matriz[1];
    n3 = matriz[2];

    /*printf("Nota 1:\n");
    scanf("%d", &n1);
    printf("Nota 2:\n");
    scanf("%d", &n2);
    printf("Nota 3:\n");
    scanf("%d", &n3);*/

    ME = (n1 + n2 + n3)/3;
    MA = (n1 + n2*2 + n3*3 + ME)/7;
    printf("Media das notas %f\n", ME);
    printf("Media de aproveitamento das notas %f\n", MA);

    if(MA >= 9)
        printf("A\n");
    if(MA >= 7.5 && MA < 9)
        printf("B\n");
    if(MA >= 6 && MA < 7.5)
        printf("C\n");
    if(MA >= 4 && MA < 6)
        printf("D\n");
    if(MA < 4)
        printf("E\n");
}