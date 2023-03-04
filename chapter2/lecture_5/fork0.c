#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int
main(){

	pid_t child_pid ;
	int data = 0;

	child_pid = fork() ;
	 
	if (child_pid == 0){
		sleep(3) ;
		printf("Child\n") ;
	}
	else if (child_pid > 0 ) {
		data = 1 ;
		printf("Parent of %d\n", child_pid) ;
		wait(0x0) ;
	}

	else /*child_pid < 0 */
		printf("Fork faled.\n") ;
	
}

