#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

long size_source(FILE * source){
	
   	int bytes, octet;
   	if(source == NULL)  {
      perror ("Erreur");
      return(-1);
   }
   fseek(source, 0, SEEK_END);

   bytes = ftell(source);
   octet = bytes/8;
   printf("Taille du fichier source.txt = %d bytes ou %d octet\n", bytes, octet);
}

long size_dest1(FILE * dest1){
	
   	int bytes, octet;
   	if(dest1 == NULL)  {
      perror ("Erreur");
      return(-1);
   }
   fseek(dest1, 0, SEEK_END);

   bytes = ftell(dest1);
   octet = bytes/8;
   printf("Taille du fichier dest1.txt = %d bytes ou %d octet\n", bytes, octet);
}

long size_dest2(FILE * dest2){
	
   	int bytes, octet;
   	if(dest2 == NULL)  {
      perror ("Erreur");
      return(-1);
   }
   fseek(dest2, 0, SEEK_END);

   bytes = ftell(dest2);
   octet = bytes/8;
   printf("Taille du fichier dest2.txt = %d bytes ou %d octet\n", bytes, octet);
}

void main(int argc, char *argv[]){
	FILE * source;
	FILE * dest1;
	FILE * dest2;
	
	printf("-- Taille de fichiers --\n");
	
	source = fopen("source.txt", "r");
	size_source(source);
	fclose(source);
	
	dest1 = fopen("dest1.txt", "r");
	size_dest1(dest1);
	fclose(dest1);
	
	dest2 = fopen("dest2.txt", "r");
	size_dest2(dest2);
	fclose(dest2);

	getch();
}

