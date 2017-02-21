#include <stdio.h>
#include <stdlib.h>
#include "definiciones.h"

void guarda_senal(double * senal){

	register int n;
	FILE * archivo_salida;

	archivo_salida=fopen("datos.dat","w");

	if(archivo_salida!=NULL){

		for(n=0;n<TAM;n++){
			fprintf(archivo_salida,"%f \n",senal[n]);
		}

		fclose(archivo_salida);

	}else{
		printf("Ocurrio un error al crear el archivo :(\n");
		exit(1);
	}
	
	return;
}