#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

void source(char c);
void dest1(char c);
void dest2(char c);
void main(int argc, char *argv[]){
	char c;
	FILE * source;
	FILE * dest2;
	int i=0, j=0;
	int getc(FILE * source);
	int fputc(int caractere, FILE * dest1);
	
	printf("-- Copie sans lettre 'a' --\n");
	
	printf("Contenu du fichier source.txt : ");	
	source = fopen("source.txt", "r");
	dest2=fopen("dest2.txt","w+");
	while(1)
	{
		c=getc(source);
		if(feof(source))
		{
			break;
		}
		printf("%c",c);
		if(dest2 != NULL){
			if(c!='a'){
				fputc(c, dest2);
			}			
		}
	}
	fclose(dest2);
	
	printf("\nContenu du fichier dest2.txt : ");
	dest2=fopen("dest2.txt","r");
	while(1)
	{
		c=getc(dest2);
		if(feof(dest2))
		{
			break;
		}
		printf("%c",c);
	}
	
	fclose(source);
	fclose(dest2);
	
	getch();
	return 0;
}

