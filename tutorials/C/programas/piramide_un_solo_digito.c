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
							if (i+k < 10) {
              printf("%d ", i+k);
							}
              else
              {printf("%d ",(i+k)%10);
              }

              ++contadorIzquierdo;
          }
          else
          {
              ++contadorDerecho;
              if ((i+k-2*contadorDerecho) < 10) 
              {
              printf("%d ", (i+k-2*contadorDerecho));
              }
              else
              {
              printf("%d ", (i+k-2*contadorDerecho)%10);
              }
          }
          ++k;
      }
      contadorDerecho = contadorIzquierdo = k = 0;

      printf("\n");
  }
  return 0;
}
