#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main(int argc, char *argv[]){
	char c;
	FILE * source;
	FILE * dest1;
	int getc(FILE * source);
	int fputc(int caractere, FILE * dest1);
	
	printf("-- Copie d'un fichier --\n");
	
	printf("Contenu du fichier source.txt : ");	
	source = fopen("source.txt", "r");
	dest1=fopen("dest1.txt","w+");
	while(1)
	{
		c=getc(source);
		if(feof(source))
		{
			break;
		}
		printf("%c",c);
		if(dest1 != NULL){
			fputc(c, dest1);
		}
	}
	fclose(dest1);
	
	printf("\nContenu du fichier dest1.txt : ");
	dest1=fopen("dest1.txt","r");
	while(1)
	{
		c=getc(dest1);
		if(feof(dest1))
		{
			break;
		}
		printf("%c",c);
	}
	
	fclose(source);
	fclose(dest1);
	
	getch();
	return 0;
}

