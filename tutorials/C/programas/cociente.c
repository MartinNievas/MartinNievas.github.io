#include <stdio.h>
int main()
{
	int	dividendo, divisor, cociente, resto;
  printf("Ingrese el dividendo: ");
  scanf("%d", &dividendo);

  printf("Ingrese el divisor: ");
  scanf("%d", &divisor);

  /*Calcular el cociente*/
	cociente = dividendo / divisor;
	/*Calcular el resto*/
	resto = dividendo % divisor;

  printf("Cociente = %d\n", cociente);
  printf("Resto = %d", resto);

  return 0;
}
