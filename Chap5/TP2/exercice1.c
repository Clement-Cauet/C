#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main(int argc, char *argv[]){
	FILE * source;
	source = fopen("exercice1.txt", "w+");
	char ch;
	int getc(FILE * exercice1);
	
	printf("-- Ecriture dans un fichier --\n");
	
	printf("Alphabet :\n");
	for(ch='A'; ch<='Z'; ch++){
		putchar(ch);
		printf("  ");
	}
	
	getch();
	return 0;
}


