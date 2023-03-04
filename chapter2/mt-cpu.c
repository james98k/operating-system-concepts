#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *
print (void * s)
{
    char * str = (char *) s;

    for (int i =0; ; i++){
		if(i % 400000000 == 0)
		    printf("%s\n", str);

	}
	return 0x0 ;
    
    }


int
main (int argc, char *argv[])
{
    if(argc < 2){
		fprintf(stderr, "usage : cpu{<string>}+\n");
		exit(1);
	}

	pthread_t * threads = calloc(argc, sizeof(pthread_t)) ;

	int n ;
	for ( n = 1; n < argc ; n++){
	     char * str = argc[n] ;

	     pthread_create(threads + n, 0x0, print, str) ;
	    }
	for (n = 1; n < argc ; n++){
	    pthread_join(threads[n], 0x0);

	    }
    }
