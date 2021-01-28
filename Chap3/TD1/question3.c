#include <stdio.h>

void produit();
void quotient();
void moyenne();
void puissance();
void main(int argc, char *argv[]){
	
	produit();
	quotient();
	moyenne();
	puissance();
	
	getch();
	return 0;
}

void produit(){
	int a, b, c;
	printf("\nCalcul d'un produit");
	printf("\nChoisissez un nombre : ");
	scanf("%d", &a);
	printf("Choisissez un nombre : ");
	scanf("%d", &b);
	c=a*b;
	printf("%d x %d = %d", a, b, c);
}

void quotient(){
	int x, y, z;
	printf("\nCalcul d'un quotient");
	printf("\nChoisissez un nombre : ");
	scanf("%d", &x);
	printf("Choisissez un nombre : ");
	scanf("%d", &y);
	z=x/y;
	printf("%d / %d = %d", x, y, z);
}

void moyenne(){
	float note, moyenne, somme;
	int nbnote, nbrnote;
	 
	nbnote=0;
	nbrnote=0;
	note=0;
	moyenne=0;
	somme=0;
	 	printf("\nCalcul de la moyenne");
		printf ("\nVeuillez saisir le nombre de notes : ");
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
}
 void puissance(){
 	int nbr, pui, res;
 	printf("\nCalcul de la puissance");
	printf("\nChoisissez un nombre : ");
	scanf("%d", &nbr);
	printf("Choisissez un nombre : ");
	scanf("%d", &pui);
	res=pow(nbr,pui);
	printf("%d ^ %d = %d", nbr, pui, res);
 }
