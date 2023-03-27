#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main() {
	pid_t pid;

	/* Fork a child process */
	pid = fork();

	/*Error occurred */
	if (pid < 0) {
		fprintf(stderr, "Fork Failed");
		return 1;
	}
	/* Child Process */
	else if (pid == 0)  {
		execlp("/bin/ls", "ls", NULL);
	}
	/* Parent Process */
	else {
		wait(NULL);
		printf("Child Complete");
	}

	return 0;

}
