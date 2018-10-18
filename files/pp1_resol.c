#include <stdio.h>

#define N 100

typedef struct persona {
  char nombre[20];
  int edad;
}persona_t;

void ordenar_edad_menor_mayor(persona_t *, int);
void ingreso_personas(persona_t *, int);
int validar_edad_mayor_que(int);
void imprimir_personas(const persona_t *, int);
void buscar_m_maximos(persona_t * const , int, int);

int main(void)
{
  int n;

  persona_t personas[N];

  do {
    printf("Cuantas personas ingresará (0 < n < %d): ", N);
    scanf("%d", &n);
  } while ( n <= 0 || n >= N);

  ingreso_personas(personas, n);

  ordenar_edad_menor_mayor(personas, n);

  imprimir_personas(personas, n);

  buscar_m_maximos(personas, n, 2);

  return 0;
}

void ingreso_personas(persona_t * p, int n)
{
  int i;

  for ( i = 0 ; i  < n ; i++ )
  {
    printf("Ingrese el nombre: ");
    scanf("%s", (p+i)->nombre);
    /*scanf("%s", (*(p+i)).nombre);*/

    (p+i)->edad = validar_edad_mayor_que(17);

  }
}

int validar_edad_mayor_que(int e)
{
  int edad;

  do {
    printf ("Ingrese edad (>%d): ", e);
    scanf("%d", &edad);
  } while ( edad <= e );

  return edad;
}

void ordenar_edad_menor_mayor(persona_t * p, int n)
{
  int i,j;
  persona_t tmp;

  for ( i = 0 ; i < n-1 ; i++ )
    for ( j = 0 ; j < n-1 ; j++ )
      if ( (p+j)->edad > (p+j+1)->edad )
      {
        tmp = j[p];
        p[j] = (j+1)[p];
        p[j+1] = tmp;
      }
}

void imprimir_personas(const persona_t *p, int n){
  int i;

  printf("%-20s\t\t%s\n","Nombre", "Edad");
  for ( i = 0; i < n ; i++ ){
    printf("%-20s\t\t%d\n", p->nombre, p->edad);
    p++;
  }
}

void buscar_m_maximos(persona_t * const p, int n, int m){
  int i;

  printf("Los %d mayores son\n", m);
  printf("%-20s\t\t%s\n","Nombre", "Edad");
  for ( i = n-1; i > n - 1 - m ; i-- )
    printf("%-20s\t\t%d\n", (*(p+i)).nombre, (*(p+i)).edad);

}
