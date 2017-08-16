/*
 * Realizar un programa que cargue en un arreglo unidimensional los primeros 
 * 100 números (naturales mas el cero) pares. Luego que imprima el contenido del 
 * arreglo en pantalla. 
 */
#include <stdio.h>
#define TAM 100


int main()
{
  int mi_arreglo[TAM];
  int contador = 0;
  int i = 0;
  
  /* Almaceno solo los eleentos pares en el arreglo */
  do {
    if ( i%2 == 0 ) 
     mi_arreglo[contador++] = i;

    i++;
  } while (contador<100);

  /* Imprimo el contenido*/
  for (i = 0; i < TAM; i++)
    printf("%d\n", mi_arreglo[i]);
  
  return 0;
}
