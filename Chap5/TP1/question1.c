#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main(int argc, char *argv[]){
	char c;
	FILE * source;
	source = fopen("source.txt", "r");
	int getc(FILE * source);
	
	printf("-- Lecture d'un fichier --\n");
	
	printf("Contenu du fichier source.txt : ");	
	while(1)
	{
		c=getc(source);
		if(feof(source))
		{
			break;
		}
		printf("%c",c);
	}
	fclose(source);
	
	getch();
	return 0;
}


