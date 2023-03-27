#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
	int n=3;
	printf("Soy el proceso padre, mi id es %d \n", getpid());
	for (int i=0; i<n; i++){
		fork();
		printf("Soy un proceso! numCiclo: %d numPID: %d \n", i, getpid());
	}
	return 0;
}
