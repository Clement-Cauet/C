#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(int argc, char *argv[]) {

int x, i, j;

printf ("Veuillez saisir une valeur entre 2 et 10 : ");
scanf ("%d", &x);

while (!(x>=2) && (x<=10)){
	printf ("Veuillez saisir une nouvelle valeur : ");
	scanf ("%d", &x);
}

for (i = 0; i<x; i++) {
	for (j = 0; j < 10; j++){
		printf("| ");
		printf("%2d*%2d=%3d ", i+1, j+1, (i+1)*(j+1));
	}
	printf("\n");
}
	

getch();
return 0;	
}
