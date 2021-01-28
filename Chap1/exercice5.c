#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(int argc, char *argv[]) {

int quantite;
float prix;

printf("Prix de l'article : ");
scanf("%f", &prix);
printf("Quantite d'article : ");
scanf("%d", &quantite);

prix=prix*quantite;

if(prix>=500)
{
	prix=prix*0.9;
}

printf ("Votre facture est de : ");
printf("%f", prix);

getch();

return 0;
}
