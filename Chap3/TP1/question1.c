#include <stdio.h>

void puissance();
void main(int argc, char *argv[]){
	
	int a, b, c;
	
	printf("Calcul de la puissance");
	printf("\nChoisissez un nombre : ");
	scanf("%d", &a);
	printf("Choisissez un nombre : ");
	scanf("%d", &b);

	puissance(a, b);
	
	getch();
	return 0;
}

 void puissance(int a, int b){
 	int c;
 	
	c=pow(a, b);
	printf("%d ^ %d = %d", a, b, c);
 }
