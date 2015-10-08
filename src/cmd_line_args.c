/*
 ============================================================================
 Name        : cmd_line_args.c
 Author      : Chaitanya Hazarey <C@24.IO>
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

	int i = 0;
	int command = 0;
	int do_reboot = 0;

	printf("\nargc - %d\n", argc);

	i = argc;

	for (i = 0; i < argc ; i++)
		printf("\nargc = %d argv ->%s<-\n\n", i, argv[i]);

	while((command = getopt(argc, argv, "r::")) != -1){
		switch(command){
		        case 'r':
		        	do_reboot = 1;
		            break;
		}
	}

	printf("\noptind - %d\n", optind);

    optind--;
    for( ;optind < argc && *argv[optind] != '-'; optind++){
          printf("\nArguments - %s\n", argv[optind] );
    }

	printf("\n\ndo_reboot - %d\n\n", do_reboot);


	printf("\n");

	for (i = 0; i< 10 ; i++){


		if ( i >= 1 && i <= 5)
			printf (" %d ", i);
		else
			printf(" ->%d<- ", i);


	}

	printf("\n");


	return EXIT_SUCCESS;
}
