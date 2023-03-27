#include <stdio.h> //incluimos la libreria de estandar input/output
#include <unistd.h> //para hacer sleep
#include <time.h> //para inicializar el tiempo

void do_nothing(){
	// "Dormimos" el proceso por 2 segundos, simula que esta haciendo alguna tarea.
	usleep(2000000);
}

int main() {
	double timeSpent = 0.0;
	clock_t begin = clock();
	do_nothing();
	do_nothing();
	do_nothing();
	do_nothing();
	do_nothing();

	clock_t end  = clock();
	timeSpent += (double)(end - begin) / CLOCKS_PER_SEC;
	printf("El tiempo dedicado fue %f segundos \n", timeSpent); 

	return 0;
}

