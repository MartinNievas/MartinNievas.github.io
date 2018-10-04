/** Ejemplo de pograma con las distintas notaciones  */
/** para utilizar arreglos en funciones */
/**  */
#include <stdio.h>
#define N 4

void imprimir_arreglo(int v[N]);
void incrementar_arreglo_1(int v[N]);
void incrementar_arreglo_2(int v[], int tam);

int main(void)
{
  int arreglo[N];
  int i;

  /** Inicializo el arreglo */
  for (i = 0; i < N; i++)
    arreglo[i] = i+1;

  printf("Arreglo original\n");
  /** Imprimo el arreglo original */
  imprimir_arreglo(arreglo);

  /** ---------------------------------------------------- */
  /** Llamado a la función incrementar 1 */
  printf("Llamado a la función incrementar 1\n");
  incrementar_arreglo_1(arreglo);

  /** Imprimo el arreglo incrementado*/
  imprimir_arreglo(arreglo);

  /** ---------------------------------------------------- */
  /** Llamado a la función incrementar 2 */
  printf("Llamado a la función incrementar 2\n");
  incrementar_arreglo_2(arreglo, N);

  /** Imprimo el arreglo incrementado*/
  imprimir_arreglo(arreglo);

  return 0;
}

/** Función para imprimir el arreglo */
void imprimir_arreglo(int v[N]){
  int i;

  for (i = 0; i < N; i++)
    printf("%d ", v[i]);
  printf("\n");
}

/** Función para incrementar los elementos del arreglo */
/** con la primera notación */
void incrementar_arreglo_1(int v[N]){
  
  int i;

  for (i = 0; i < N; i++)
    v[i]++;
}

/** Función para incrementar los elementos del arreglo */
/** con la segunda notación */
void incrementar_arreglo_2(int v[], int tam){

  int i;

  for (i = 0; i < tam; i++)
    v[i]++;
}



