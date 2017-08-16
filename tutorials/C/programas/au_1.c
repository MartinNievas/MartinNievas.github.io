/*
 * Realizar un programa que cargue en un arreglo unidimensional los primeros 99
 * números naturales mas el cero. Luego que imprima el contenido del arreglo en
 * pantalla.
 */ 
#include <stdio.h>
#define TAM 100

int main()
{
  int mi_arreglo[TAM];
  int i;
  /* Cargamos los elementos en el arreglo */

  for (i = 0; i < TAM; i++)
    mi_arreglo[i] = i;

  for (i = 0; i < TAM; i++)
  {
    printf("El elemento [%d] es: %d\n", i, mi_arreglo[i]);
  }

  return 0;
}
