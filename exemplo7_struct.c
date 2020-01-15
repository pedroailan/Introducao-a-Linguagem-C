#include <stdio.h>

struct ficha
{
	char nome[30];
	char curso[30];
	float media;

} aluno;


void imprime() {
	printf("Ficha do Aluno\n\n");
	printf("Nome : %s\n", aluno.nome);
	printf("Curso : %s\n", aluno.curso);
	printf("Media : %.2f\n", aluno.media);
}

int main()
{
	
	printf("Digite nome: \n");
	fflush(stdin);
	fgets(aluno.nome, 30, stdin);

	printf("Digite curso:\n");
	fflush(stdin);
	fgets(aluno.curso, 30, stdin);

	printf("Digite media: \n");
	scanf("%f", &aluno.media);
	
	//system("cls");

	imprime();
	return 0;
}
