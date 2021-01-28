#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

void nb(int n);
void main(int argc, char *argv[]){
	
	int n;
	printf("--Calcul de n--\n");
	printf("Entrez un nombre pour n : ");
	scanf("%d", &n);
	
	nb(n);

    getch ();
}

void nb(int n){
	
	int i, nb;
	
	while(n<0){
		printf("Veuillez entrer une valeur positive pour n : ");
		scanf("%d", &n);
	}
	
	nb=1;
	
	for(i=1; n>=i; i++){
		nb=nb*i;
	}
	printf("n vaut %d", nb);
}

