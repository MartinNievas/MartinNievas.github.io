#include <stdio.h>

int main()
{ int numero1;
  int numero2;

  printf("Ingrese el primer número: ");
  scanf("%d",&numero1);
  printf("Ingrese el segundo número: ");
  scanf("%d",&numero2);
  printf("%dx%d = %d\n", numero1, numero2, numero1*numero2);
  
  return 0;
}
