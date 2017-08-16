/*
 * Realizar un programa que lea 10 números por teclado, los almacene en un 
 * arreglo y muestre la sumatoria, el promedio, y el mayor de todos los 
 * elementos.
 */
#include <stdio.h>
#define TAM 10

int main()
{
  int mi_arreglo[TAM];
  int i;
  int sumatoria = 0;
  float promedio = 0;
  int mayor;

  /* Ingreso de números por teclado */
  for (i = 0; i < TAM; i++)
  {
    printf("Ingrese el elemento [%d]: ", i);  
    scanf("%d",&mi_arreglo[i]);
  }  
  /* Calculamos la sumatoria */
  for (i = 0; i < TAM; i++)
   sumatoria += mi_arreglo[i]; 
      
  /* Calculamos el promedio */
  promedio = sumatoria/(float)TAM;

  /* Buscamos el mayor elemento */
  /* Como "mayor" no está inicializada porque no conozco el rango de los 
   * valores ingresados puedo utilizar el primer elemento del arreglo para 
   * inicializar la variable
   */
  mayor = mi_arreglo[0];
  for (i = 0; i < TAM; i++)
    if (mi_arreglo[i] > mayor)
      mayor = mi_arreglo[i];

  /* Imprimimos los valores */
  printf("El mayor elemento es: %d\n", mayor);
  printf("El promedio de todos los elementos es: %f\n", promedio);
  printf("La sumatoria de los elementos es: %d\n", sumatoria);
  printf("Los elementos del arreglo son:\n");
  for (i = 0; i < TAM; i++)
    printf("Elemento [%d]: %d\n", i, mi_arreglo[i]);
    

  return 0;
}
