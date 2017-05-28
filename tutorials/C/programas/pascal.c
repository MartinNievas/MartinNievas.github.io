#include <stdio.h>
int main()
{
  int filas, coeficiente = 1, espacio, i, j;
  
  printf("Ingrese el número de filas: ");
  scanf("%d",&filas);

  /*Iteramos para cada fila*/
  for(i=0; i<filas; i++)
  {   
    
  /*Necesito dejar filas-1 espacios antes de 
   *imprimir el primer número de la fila correspondiente
   */
      for(espacio=1; espacio <= filas-i; espacio++)
          printf("  ");   /*Imprimo un espacio*/
  
  /*Iteramos las columnas
   *Sabemos que la cantidad de elementos a imprimir en la fila i
   *es de  
   */
      for(j=0; j <= i; j++)
      {   /*Si estoy en los bordes imrpimo un "1"
           *si no, calculo el valor del coeficiente a imprimir
           */
          if (j==0 || i==0)
              coeficiente = 1;
          else
              coeficiente = coeficiente*(i-j+1)/j;

          printf("%4d", coeficiente);
      }
      printf("\n");
  }

  return 0;
}
