#include <stdio.h>
#include "definiciones.h"
#include "genera.h"
#include "guarda.h"

int main(){
	
	double senal[TAM];

	genera_senal(senal);
	guarda_senal(senal);

	return 0;
}
