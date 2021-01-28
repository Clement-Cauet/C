#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

void saisie(int* nb, int* tab);
void main(int argc, char *argv[]){

	int nb, tab;

	printf("--Compteur nombre saisie--\n");	
	saisie(&nb, &tab);
	
	getch();
}

void saisie(int* nb, int* tab){
	
	int i, nbr;
	
		for(i=0; i<20; i++){
			printf("Entrez une valeur : ");
			scanf("%d", &tab[i]);
			if(tab[i]==0){
				break;
			}
		}
		nb=i;
		printf("\n Valeurs du tableau : \n");
		for (i=0; i<20; i++){
			printf("%4d", tab[i]);
		}
		printf("\n Nombre de valeurs dans le tableau : %d\n", nb);
}
