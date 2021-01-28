#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main(int argc, char *argv[]) {
	
	int tab1[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
	int tab2[]={-19,-18,-17,-16,-15,-14,-13,-12,-11,-10,-9,-8,-7,-6,-5,-4,-3,-2,-1,0};
	int i, j, produit, produiti, produitj;
	

	produiti=0;
	produitj=0;
	produit=0;
	for (i=0; i<=19; i++){
		produiti*=i;
	}
	
	for (j=0; j<=19; j++){
		produitj*=j;
	}
	
	produit=produiti*produitj;
	printf("Voici le produit des 2 tableaux : %d", produit);
	
	
getch();
return 0;	
	
}
