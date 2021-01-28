#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main(int argc, char *argv[]){

	double adr1=-45.78, adr2=678.88;
		
	printf("--Pointeur Variable--\n");	
	printf("L'adresse de %f est : %p\n", adr1, adr1);
	printf("L'adresse de %f est : %p\n", adr2, adr2);
	
	getch();
	return 0;
}
