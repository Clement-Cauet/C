#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

void pgcd(int a, int b);
void main(int argc, char *argv[]){
	
	int a, b;
	printf("--Calcul du pgcd--\n");
	printf("Entrez un nombre : ");
	scanf("%d", &a);
	printf("Entrez un nombre : ");
	scanf("%d", &b);
	
	pgcd(a, b);

    getch ();
    return 0;
}

void pgcd(int a, int b){
	
	while(a!=b){
		if (a>b){
			a=a-b;
		}
		else{
			b=b-a;
		}
	}
	printf("%d est le plus grand denominateur commun", a);
	return 1;
}

