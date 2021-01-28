#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

void maj(char str[100]);
void main(int argc, char *argv[]){
	
	char str[100];
	
	printf("--Conversion en majuscule--\n");
	maj(str);
	printf("Votre mot en majuscule: %s", str);
	
	getch ();
	
}

void maj(char str[100]){
	
	int i;

	printf("Votre mot en minuscule: ");
	gets(str);
	for (i=0; str[i]!='\0'; i++){
          if(str[i] >= 'a' && str[i] <= 'z') {
             str[i] = str[i] -32;
       }
       }
}

