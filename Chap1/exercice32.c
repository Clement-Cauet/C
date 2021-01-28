#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(int argc, char *argv[]) {

float poids, tarif;

printf ("Veuillez saisir le poids de la lettre : ");
scanf ("%f", &poids);

if (poids<20){
	printf ("Le tarif est de : 3,00frs");
}

if (poids>=20 && poids<=50){
	printf ("Le tarif est de : 3,95frs");
}

if (poids>50) {
	printf ("Le tarif est de : 5,90frs");
}

getch();
return 0;
}
