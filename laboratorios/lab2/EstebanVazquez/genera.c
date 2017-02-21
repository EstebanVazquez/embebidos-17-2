#include <stdio.h>
#include <math.h>
#include "definiciones.h"

void genera_senal(double * senal){

	register int n;
	float f=1000,fs=45000;


	for(n=0;n<TAM;n++){
		senal[n]=sinf((2*n*M_PI*f)/fs);
	}
	
	return;
}
