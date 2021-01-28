#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

void pair(int nb);
void triple(int nb);
void main(int argc, char *argv[]){
	
	int nb;
	printf("--Calcul si un nombre est multiple de 2 et de 3--\n");
	printf("Entrez un nombre : ");
	scanf("%d", &nb);
	
	pair(nb);
	triple(nb);

    getch ();
}

void pair(int nb){
	if(nb%2==0){
		printf("%d est pair\n", nb);
	}
	else{
		printf("%d est impair\n", nb);
	}
}

void triple(int nb){
	if(nb%3==0){
		printf("%d est divisible par 3\n", nb);
	}
	else{
		printf("%d n'est pas dividible par 3\n", nb);
	}
}

