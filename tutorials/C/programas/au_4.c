/* Realizar un programa que lea 10 números enteros por teclado, los almacene en 
 * un arreglo. Luego copiar los elementos del primer arreglo en otro 
 * multiplicados por 7. Por último  mostrar los elementos del segundo arreglo.
 */
#include <stdio.h>
#define TAM 10

int main()
{
  int arreglo1[TAM];
  int arreglo2[TAM];
  int i;
  
  /* Cargamos los elementos en el primer arreglo */
  for (i = 0; i < TAM; i++)
  {
    printf("Ingrese el elemento [%d]: ", i);
    scanf("%d", &arreglo1[i]);
  }
  
  /* Cargamos el segundo arreglo */
  for (i = 0; i < TAM; i++)
    arreglo2[i] = 7 * arreglo1[i];
  
  printf("Los elementos del segundo arreglos son:\n");
  for (i = 0; i < TAM; i++)
    printf("Elemento [%d]: %d\n", i, arreglo2[i]);

  return 0;
}
