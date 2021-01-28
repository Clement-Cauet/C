#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(int argc, char *argv[]) {
	
	int note, nbnote;
	float somme;
	
	somme = 0;
	for (nbnote = 1; nbnote <= 30; nbnote++)
	{
		printf ("Saisir une note : ");
		scanf("%d", &note);
		somme = note + somme;
	}
	
	printf ("La moyenne est de : ");
	somme = somme / nbnote;
	printf("%f", somme);
	
	getch();
	
	return 0;
}
