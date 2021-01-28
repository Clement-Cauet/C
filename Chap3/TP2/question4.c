#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

void lire();
void affiche();
void trier();
void indice_min();
void main(int argc, char *argv[]){
	
	int tab[20];
	
	printf("-- Tableau a trier par ordre croissant --\n");
	lire(tab);
	printf("\n Valeurs du tableau : \n");
	affiche(tab);
	printf("\n Valeur du tableau trie par ordre croissant : \n");
	trier(tab);
	printf("\n Valeur minimal du tableau : \n");
	indice_min(tab);
	getch ();
	
}

void lire(int * tab){
	
	int i;
	
	for(i=0; i<20; i++){
		printf("Entrez une valeur : ");
		scanf("%d", &tab[i]);
	}
}

void affiche(int * tab){
	
	int i;
	
	for (i=0; i<20; i++){
		printf("%4d", tab[i]);
	}
}

void trier(int * tab){
	int i, j, tmp;
	
	for (i=0 ; i < 20; i++) {
    j = i;
 
    while (j > 0 && tab[j-1] > tab[j]) {
      tmp = tab[j];
      tab[j] = tab[j-1];
      tab[j-1] = tmp;
 
      j--;
    }
  }
 
  for (i=0; i < 20; i++){
  	printf("%4d", tab[i]);
  }
}

void indice_min(int * tab){
	int i, min, max;
    
	min=INT_MAX;
	
	for (i=0; i<10; i++)
     {
      if(tab[i]<min) min=tab[i];
     }
     
     printf ("La valeur minimal est %d\n", min);
}
