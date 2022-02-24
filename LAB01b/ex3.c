/*3. Faça o programa que apresenta a seguinte saída, perguntando ao usuário
o número máximo (no exemplo, 9). Este número deve ser sempre ímpar.
1 2 3 4 5 6 7 8 9
  2 3 4 5 6 7 8
    3 4 5 6 7
      4 5 6
        5
*/
#include <stdio.h>

int main()
{
  int i, j, x, y;
    printf("Digite um número inteiro ímpar:\n");
    scanf("%d", &x);

    while (x % 2 == 0)
    {
      printf("O número digitado deve ser inteiro e ímpar:\n");
      scanf("%d", &x);
    }

  if (x % 2 != 0)
    {
        for( i = 0; i<= (x / 2) + 1; i++)
        {
            for ( j = i + 1; j <= x - i; j++ )
            {
                printf("%d ",j);
            }

            printf("\n");

            for ( j = 0; j < (i + 1) * 2; j++ )
              printf(" ");
         }
    }
  printf("\nFim\n");
}