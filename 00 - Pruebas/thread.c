/*
 PRUEBA THREADS
  -Compilar: gcc archivo.c -o ejecutableRenombrado -lpthread
  -Ejecutar: ./ejecutableRenombrado
 */

#include<pthread.h>
#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

/* Esta variable es compartida entre los diferentes thread(s) */
int sum;
char *txtPrueba="Texto de prueba";

/* Los threads llaman a esta funcion */
void* funcion(void* param);

int main(int argc, char *argv[])
{
	/* Es el identificador del thread */
	pthread_t tid;

	/* Conjunto de atributos del thread */
	pthread_attr_t attr;

	/* Setear los atributos por defecto */
	pthread_attr_init(&attr);

	int parametro_funcion=4;
	printf("El parametro pasado es: %d \n", parametro_funcion);

	/* Crear el thread  */
	pthread_create(&tid, &attr, funcion, (void *)(intptr_t) parametro_funcion);

	/* Esperar a la salida del thread */
	pthread_join(tid,NULL);

	printf("Suma final  es = %d \n", sum);
	printf("Probando salida de String: %s \n", txtPrueba);
}

/* El thread ejecuta esta funcion */
void *funcion(void* param)
{
	int i;
	int upper = (intptr_t) param;

	system ("ps aux | grep -i ejecThread");

	sum = 0;
	for (i = 1; i <= upper; i++){
		sum += i;
		printf("Valor de Sum es: %d - Valor de i es: %d \n", sum, i);
	}
	pthread_exit(0);
}
