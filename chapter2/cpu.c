#include <stdio.h>
#include <stdlib.h>



void *
print (void * s)
{
    char * str = (char * ) s;
    for (int i = 0; ; i++){
	if(i % 400000000 == 0)
	    printf("%s\n", str);
	}
    return 0x0 ;
}



int
main (int argc, char * argv[]){
    
    if (argc != 2){
	fprintf(stderr, "usage : cpu <string>\n");
	exit(1);
	}

	char * str = argv[1];
	
	print(str) ;

	return 0;    
}
