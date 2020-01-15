#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, x;
	printf("Entre com o valores: \n");
	scanf("%d %d", &a, &b);
	system("cls");

	printf("1 - Somar\n");
	printf("2 - Multiplicar\n");
	scanf("%d", &x);
	system("cls");

	if(x == 1) {
		printf("Soma : %d", a+b);
	} else if (x == 2){
		printf("Multiplicacao : %d", a*b);
	} else {
		printf("Opcao invalida\n");
		system("pause");
	}
	
	
	return 0;
}
