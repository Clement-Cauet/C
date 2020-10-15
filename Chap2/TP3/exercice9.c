#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>
#include <tchar.h>


int main(int argc, char *argv[]) {
	
	char str[100], lettre[26];
	int i, j, maj, min, compteur;
	
	printf("Votre phrase : ");
	gets(str);
	compteur=0;
	str[i]=0;
	lettre[i]=0;
	
	while(str[compteur]!='\0'){
		compteur++;
	}
	
	printf("La chaine %s contient : \n", str);
	
	for(i=0; i<=compteur; i++){
		if((maj=str[i]>='A' && str[i]<='Z')){
			lettre[str[i]-(maj?65:97)]++;
			printf("%d %c dans la chaine\n", lettre, str);
		}
		if((min=str[i]>='a' && str[i]<='z')){
			lettre[str[i]-(maj?65:97)]++;
			printf("%d %c dans la chaine\n", lettre, str);	
		}
	}
	
	
	
	
	
	
	
	
getch ();
return 0;	
}
