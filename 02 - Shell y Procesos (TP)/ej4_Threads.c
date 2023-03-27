#include <stdio.h> 	// Libreria de estandar input/output
#include <unistd.h> 	// Libreria sleep
#include <time.h> 	// Libreria tiempo
#include <pthread.h>	// Libreria threads

void *do_nothing(void *arg){
	// "Dormimos" el proceso por 2 segundos, simula que esta haciendo alguna tarea.
	usleep(2000000);
}

int main() 
{
	time_t begin = time(NULL);

	pthread_t t1;
        pthread_t t2;
        pthread_t t3;
        pthread_t t4;
        pthread_t t5;

	pthread_create(&t1, NULL, &do_nothing, NULL);
        pthread_create(&t2, NULL, &do_nothing, NULL);
        pthread_create(&t3, NULL, &do_nothing, NULL);
        pthread_create(&t4, NULL, &do_nothing, NULL);
        pthread_create(&t5, NULL, &do_nothing, NULL);

        pthread_join(t1, NULL);
        pthread_join(t2, NULL);
        pthread_join(t3, NULL);
        pthread_join(t4, NULL);
        pthread_join(t5, NULL);

	time_t end = time(NULL);
	int timeSpend =  (end - begin);
	printf("El tiempo dedicado fue %d segundos \n", timeSpend ); 
	return 0;
}

