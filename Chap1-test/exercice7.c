#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(int argc, char *argv[]) {
	 
	 float note, moyenne, somme;
	 int nbnote, nbrnote;
	 
	nbnote=0;
	nbrnote=0;
	note=0;
	moyenne=0;
	somme=0;
	 
		printf ("Veuillez saisir le nombre de notes : ");
		scanf ("%d", &nbnote);
	 
	 for (;nbrnote<nbnote; nbrnote++)
	 {
	 	printf ("Veuillez saisir une nouvelle note : ");
	 	scanf ("%f", &note);
	 	somme=somme+note;
	 }
	 
	moyenne=somme/nbnote;
	printf ("La moyenne est de : ");
	printf ("%f", moyenne);
	
	 getch();
	 return 0;
}
	 
