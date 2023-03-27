
#include <stdio.h> //incluimos la libreria de estandar input/output
#include <unistd.h> //para hacer sleep
#include <time.h> //para inicializar el tiempo

void do_nothing(){
        // "Dormimos" el proceso por 2 segundos, simula que esta haciendo alguna tarea.
        usleep(2000000);
}

int main() 
{
        time_t begin = time(NULL);

        do_nothing();
        do_nothing();
        do_nothing();
        do_nothing();
        do_nothing();

        time_t end = time(NULL);
        int timeSpend =  (end - begin);
        printf("El tiempo dedicado fue %d segundos \n", timeSpend ); 
        return 0;
}


