#include <stdio.h>
#include <stdlib.h>

typedef struct reg
{
	int idade;
	char signo[15];
} pessoa;

int main()
{
	pessoa *p;

	p = malloc(sizeof(p));
	
	printf("Digite sua idade:  ");
	scanf("%d", &p->idade);
	printf("\nDigite seu signo:  ");
	scanf("%s", &p->signo);


	printf("\nIdade: %d\nSigno: %s", p->idade, p->signo);

	return 0;
}
