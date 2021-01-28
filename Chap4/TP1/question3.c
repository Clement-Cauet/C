#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>
#include <tchar.h>


int main(int argc, char *argv[]) {
	
	char chaine[100], lettre;
	int i, position, compteur;
	
	printf("--Adresse chaine de caratere--\n");
	
	printf("Votre phrase : ");
	gets(chaine);
	compteur=0;
	
	while(chaine[compteur]!='\0'){
		compteur++;
	}
	
	for(i=0; i<compteur; i++){
		printf("%c est a l'adresse: %p\n", chaine[i], chaine[i]);
	}
	
	
getch ();
return 0;	
}
