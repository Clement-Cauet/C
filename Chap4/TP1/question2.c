#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main(int argc, char *argv[]){

	int i, max;    
    float adr_deb[6];
		
	printf("--Pointeur ordre croisssant--\n");
    
    for (i=0; i<6; i++){
    	printf("Entrez une valeur : ");
		scanf("%f", &adr_deb[i]);
    }
    
	max=INT_MIN;
	
	for (i=0; i<6; i++)
     {
      if(adr_deb[i]>max) max=adr_deb[i];
     }
     
    printf("La valeur maximal est %d\n", max);
    printf("L'adresse de %d est : %p\n", max, max);
	
	getch();
	return 0;
}
