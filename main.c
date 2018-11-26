#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "wcfuncs.h"


int main (int argc, char **argv)
{

	if (argc <2)
	{

		fprintf(stderr, "indique um ficheiro\n");
		exit(1);	

	}
	FILE * fp = abreFicheiro(argv[1]
	for (int i = 0; i < argc; i++)
	{
		printf("Parametro %d: %s\n", i, argv[i]);
	}



        return 0;
}

