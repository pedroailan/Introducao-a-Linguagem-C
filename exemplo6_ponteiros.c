#include <stdio.h>


int main()
{
  int valor = 27;

  int *ptr;
  
  ptr = &valor;

  printf ("Conteudo da variavel valor: %d \n", valor);
  printf ("Endereco da variavel valor: %d \n", &valor);
  printf ("Endereço ponteiro ptr: %d\n", ptr);
  printf ("Conteudo da variavel ponteiro ptr: %d", *ptr);

  return(0);
}

