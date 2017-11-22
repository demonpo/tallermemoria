#include <stdio.h>
#define MAX 10

static char caracteres[MAX] = {'a','b','c'};
static long enteros_largos[MAX];
static char *punteros[MAX] = {"hola","mundo","hello","world"};

void iterar_enteros(int *);
void iterar_caracteres(char *);
void iterar_enteros_largos(long *);
void iterar_punteros(char **);

int main()
{
        int enteros[MAX];
        enteros[0] = 100;
        enteros[1] = 300;
        enteros[5] = 50;

        iterar_enteros(enteros);
}

void iterar_enteros(int *enteros)
{
        int *p_anterior = NULL;
        int *p;
        for(int i=0;i<MAX;i++)
        {
                p = enteros + i;

                printf("El valor de p es: %d\n", *p);
                printf("La dirección de p es: %p\n", p);
                printf("El offset entre direcciones es: %ld\n",(long)p - (long)p_anterior);

                p_anterior = p;
        }
}