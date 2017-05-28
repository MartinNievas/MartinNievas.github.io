#include <stdio.h>
int main()
{
	int numero1, numero2, variableTemporal;
	
  printf("Ingrese el primer numero:");
  scanf("%d",&numero1);

  printf("Ingrese el segundo numero:");
  scanf("%d",&numero2);
  printf("\nAntes del intercambio\n");
  printf("Primer número = %d\n", numero1);
  printf("Segundo número = %d\n", numero2);
  /*Guardo el primer número en la variable temporal*/
  variableTemporal = numero1;

  /*El valor del segundo número es guardado en el primer número*/
  numero1 = numero2;

  /*El valor del la variable temporal (que contiene el primer número) es asignado al segundo número*/
  numero2 = variableTemporal;
  
  printf("\nDespués del intercambio\n");
  printf("Primer número = %d\n", numero1);
  printf("Segundo número = %d\n", numero2);

  return 0;
}
