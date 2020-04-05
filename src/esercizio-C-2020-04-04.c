/*
 ============================================================================
 Name        : Esercizio_Righe.c
 Author      : Emiliano Rossi
 Version     :
 Copyright   : 
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

double media_lunghezza;
unsigned int n_riga;
int main(int argc, char ** argv){
	char c;
	unsigned long l=0;
	while((c=getchar())!=EOF){
		if(c!='\n'){
			l++;
		} else{
			n_riga++;
			if (n_riga==1){
				media_lunghezza=l;
			}else{
				media_lunghezza=(media_lunghezza+(double)l)/2;
			}
			printf("RIGA_NUMERO:\t%d\tLUNGHEZZA_RIGA:\t%lu\tMEDIA_PARZIALE:\t%.1f \n",n_riga,l,media_lunghezza);
			l=0;
		}

	}
  printf("\n");
	printf("\t\tMEDIA_FINALE %.1f\n", media_lunghezza);
	return EXIT_SUCCESS;
}
