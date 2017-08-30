#include <stdio.h>
#define COL 10
#define FILA 10

int main()
{
  int arreglo[FILA][COL];
  int i ,j,num = 0;

  /* Cargamos el arreglo */ 
   for (i = 0; i <FILA; i++)
   {
     for (j = 0; j < COL; j++)
     {
      while (num%2 != 0) {
        num++;
      }
       arreglo[i][j] = num;
       num++;
     }
   }
  
  /* Imprimir el contenido */
   for (i = 0; i <FILA; i++)
   {
     for (j = 0; j < COL; j++)
     {
       printf("%d\t", arreglo[i][j]);
     }
    printf("\n");
   }

  return 0;
}
