#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int lireDonnees(char * nomFichier, int * T, int * size){
	int i=0;
	int fgetc(FILE * nomFichier);
	
	while(1){
		getc(nomFichier);
		if(feof(nomFichier)){
			break;
		}
		for(i=0; i<=size; i++){
			fscanf(nomFichier, "%d", &T[i]);
		}
	}
}

void afficherTableau(char * nomFichier, int * T, int * size){
	int i;
	for(i=0; i<=size; i++){
			printf("%4d", T[i]);
		}
}

void triABulles(char * nomFichier, int * T, int * size){
	int i, j, tmp;
	
	for (i=0 ; i <= size; i++) {
    j = i;
 
    while (j > 0 && T[j-1] > T[j]) {
      tmp = T[j];
      T[j] = T[j-1];
      T[j-1] = tmp;
 
      j--;
    }
  }
 
  for (i=0; i <= size; i++){
  	printf("%4d", T[i]);
  }
}

void enregistrerDonnees(char * nomFichier, int * T, int * size){
	int i;
	int fgetc(FILE * nomFichier);
	
	for(i=0; i<=size; i++){
  		fprintf(nomFichier, " %d", T[i]);
	}
	printf("\n Les modififications ont bien ete enregistre dans le fichier nomFichier.txt");	
}

void main(int argc, char *argv[]){
	FILE * nomFichier;
	int T[100];
	int size = 4;
	
	printf("-- Donnees dans des fichiers --\n");
	
	nomFichier = fopen("nomFichier.txt", "r");
	lireDonnees(nomFichier, T, size);
	printf("\n Valeurs du fichier : \n");
	afficherTableau(nomFichier, T, size);
	printf("\n Valeurs du fichier trier par ordre croissant : \n");
	triABulles(nomFichier, T, size);
	fclose(nomFichier);
	nomFichier = fopen("nomFichier.txt", "w+");
	enregistrerDonnees(nomFichier, T, size);
	fclose(nomFichier);

	getch();
}

