#include <stdio.h>

void fait_le();
void affiche();
void main(int argc, char *argv[]){
	
	fait_le();
	affiche();
	
	getch();
	return 0;
}

void fait_le(){
	char tab1[100], tab2[100], tab3[100];
	int compteur;
	
	printf("Votre mot numero 1 : ");
	gets(tab1);
	compteur=0;
	while(tab1[compteur]!='\0'){
		compteur++;
	}
	
	printf("Votre mot numero 2 : ");
	gets(tab2);
	compteur=0;
	while(tab2[compteur]!='\0'){
		compteur++;
	}
	
	printf("Votre mot numero 3 : ");
	gets(tab3);
	compteur=0;
	while(tab3[compteur]!='\0'){
		compteur++;
	}
}

void affiche(){
	int i;
	printf("Votre nombre : ");
	scanf("%d", &i);
}
