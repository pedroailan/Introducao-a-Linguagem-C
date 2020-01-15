#include <stdio.h>

void imprime(char nome[], int idade) {
	printf("%s, %d\n", nome, idade);
}

int main()
{
	char nome[20];
	int idade;

	int n;
	printf("Quantidade de pessoas: ");
	scanf("%d", &n);

	for (int i = 0 ; i < n ; i++) {
		printf("Entre com seu nome: \n");
		scanf("%s", nome);

		printf("Entre com sua idade\n");
		scanf("%d", &idade);

		imprime(nome, idade);
	}

	return 0;
}