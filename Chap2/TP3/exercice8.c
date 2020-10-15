#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>
#include <tchar.h>


int main(int argc, char *argv[]) {
	
	char chaine[100], lettre, recherche;
	int i, position, compteur;
	
	printf("Votre phrase : ");
	gets(chaine);
	position=0;
	compteur=0;
	lettre=0;
	
	while(chaine[compteur]!='\0'){
		compteur++;
	}
	
	printf("Chercher une lettre : ");
	scanf("%c", &recherche);
	
	for(i=compteur; i>=0; i--){
		if(chaine[i]==recherche){
			break;
		}
	}

	position=compteur-i,
	
	printf("Le caractere %c se trouve a la position %d a partir de la droite.", recherche, position);
	
	
getch ();
return 0;	
}
