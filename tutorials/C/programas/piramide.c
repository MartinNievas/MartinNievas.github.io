#include <stdio.h>
int main()
{
  int i, espacio, filas, k=0, contadorIzquierdo = 0, contadorDerecho = 0;

  printf("Enter number of filas: ");
  scanf("%d",&filas);

  for(i=1; i<=filas; ++i)
  {
      for(espacio=1; espacio <= filas-i; ++espacio)
      {
          printf("  ");
          ++contadorIzquierdo;
      }

      while(k != 2*i-1)
      {
          if (contadorIzquierdo <= filas-1)
          {
              printf("%d ", i+k);
              ++contadorIzquierdo;
          }
          else
          {
              ++contadorDerecho;
              printf("%d ", (i+k-2*contadorDerecho));
          }
          ++k;
      }
      contadorDerecho = contadorIzquierdo = k = 0;

      printf("\n");
  }
  return 0;
}
