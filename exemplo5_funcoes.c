#include <stdio.h>
#include <stdlib.h>

void soma (int a, int b){
	printf("Soma : %d\n", a+b);
}

void multiplicar (int a, int b) {
	printf("Multiplicacao : %d\n", a*b);
}

void operacoes () {
	int a, b, x;
	printf("Entre com o valores: \n");
	scanf("%d %d", &a, &b);
	system("cls");

	printf("1 - Somar\n");
	printf("2 - Multiplicar\n");
	printf("3 - Sair\n");
	scanf("%d", &x);
	system("cls");

	if(x == 1) {
		soma(a, b);
	} else if (x == 2){
		multiplicar(a, b);
	} else if (x == 3){
		exit(1);	
	} else {
		printf("Opcao invalida\n");
		//system("pause");
		system("cls");
		operacoes();
	}
}

int main()
{
	operacoes();
	return 0;
}
