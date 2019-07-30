#include <stdio.h>
#define N 10

/** En una fábrica de cables se necesita llevar el registro de la longitud de los rollos que produce. 
 * Se quiere conocer la longitud de los mismos en cm, pero el sensor utilizado para medirla, está calibrado en pulgadas. 
 * Además, cada rollo será identificado con un número de serie */

int main(void)
{
  int n;
  float pul[N];
  int serie[N];
  float cent[N];
  char estado[N];
  int i;
  float long_rollo;
  int rojo, amarillo;
  float promedio;

  // Punto a
  do {
    printf("Ingrese la cantidad de rollos [0-%d]: ", N);
    scanf("%d", &n);
  } while (n > N || n < 0);

  //Punto b
  for (i = 0; i < n; i++)
  {
    do {
      printf("Ingrese la longitud del rollo[%d]: ",i);
      scanf("%f", &long_rollo);
    } while (long_rollo < 254 || long_rollo > 330);
    pul[i] = long_rollo;
    printf("Ingrese el número de serie del rollo[%d]: ",i);
    scanf("%d", &serie[i]);
  }
  
  //Punto c
  for (i = 0; i < n; i++)
  {
    cent[i] = pul[i] * 2.54;
  }

  //Punto d
  for (i = 0; i < n; i++)
  {
    promedio += cent[i];
    if (cent[i] > 110 && cent[i] < 120) 
    {
      estado[i] = 'a';
      amarillo++;
    }
    if (cent[i] >= 120) 
    {
      estado[i] = 'r';
      rojo++;
    }
  }

  //Punto e
  printf("promedio: %f\n", promedio);
  printf("Categoría amarillo: %d\n", amarillo);
  printf("Categoría rojo: %d\n", rojo);

  return 0;
}
