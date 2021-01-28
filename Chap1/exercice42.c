#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(int argc, char *argv[]) {
	
	int age, sexe, nbcinema, nbresto, nbsport, resto, BK, MC, oui, non, foot, tennis, basket, judo, natation, sport, sport2;
	
	BK=4;
	MC=5;
	oui=6;
	non=7;
	
	printf ("Veuillez saisir sexe (Homme=0, Femme=1, Autre=2) : ");
	scanf ("%d", &sexe);
	
	while (!(sexe==0) || (sexe==1) || (sexe==2)){
		printf ("Genre t'a pas de sexe : ");
		scanf ("%d", &sexe);
	}
	
	printf ("Veuillez saisir votre age : ");
	scanf ("%d", &age);
	
	printf ("Combien de fois allez-vous au cinema par mois : ");
	scanf ("%d", &nbcinema);
	
	printf ("Preferez-vous BK ou MC (BK=4, MC=5): ");
	scanf ("%d", &resto);
	
	while (!(resto==BK) || (resto==MC)){
		printf ("BK ou MC putain :");
		scanf ("%d", &resto);
		}
	
	printf ("C'est degeux mais c'est pas grave, je t'aime quand meme.\n");
	
	printf ("Combien de fois y allez-vous par mois : ");
	scanf ("%d", &nbresto);
	
	
	printf ("Pratiquez-vous un sport (oui=6, non=7) : ");
	scanf ("%d", &sport);
	
	while (sport != oui && sport != non){
		printf ("Toi faire sport (oui=6, non=7) :");
		scanf ("%d", &sport);
		}
	
	if (sport==oui){
		printf ("Quel sport faites-vous (foot=8, tennis=9, basket=10, judo=11, natation=12) : ");
		scanf ("%d", &sport2);
	}
	else{
		printf ("Fait du sport putain !\n");	
	}
	
	if ((sexe==0) || (sexe==1) || (sexe==2)){
		printf ("Vous etes un : ");
		switch(sexe)
		{
			case 0:
				printf("Homme");
				break;
				
			case 1:
				printf("Femme");
				break;
				
			case 2:
				printf("Autre");
				break;
		}
		
	printf("\n");
	
	}
	
	printf ("Vous avez : %d ans\n", age);
	
	if ((resto==BK) || (resto==MC)){
		printf("Vous preferez : ");
		
		switch(resto)
		{
			case 4:
				printf("BK");
				break;
				
			case 5:
				printf("MC");
				break;
		}
		
		printf("\n");
	}
	
	printf ("Vous y allez : %d fois par mois\n", nbresto);
	
	if (sport==oui) {
		printf ("Vous faites du : ");
		
		switch(sport2)
		{
			case 8:
				printf("Foot");
				break;
				
			case 9:
				printf("Tenins");
				break;
				
			case 10:
				printf("Basket");
				break;
				
			case 11:
				printf("Judo");
				break;
			
			case 12:
				printf("Natation");
				break;
		}
		
		printf("\n");	
	}
	else {
		printf("");
	}
	
	printf("Merci nous allons vendre maintenant vos info :)");
		
getch();
return 0;
}
