#include <stdio.h>
int soma_num(int num) 
{
   int resultado;
   if (num == 1) 
   {
    return (1);
   }
   else 
   {
    resultado = num + soma_num(num - 1);
   }
   return (resultado);
}

int main()
{

	printf("%d\n", soma_num(15));
	return 0;
}