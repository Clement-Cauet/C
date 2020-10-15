#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(int argc, char *argv[]) {
	
	int a, b, total, i;
	
	printf ("Veuillez saisir a : ");
	scanf ("%d", &a);
	printf ("Veuillez saisir b : ");
	scanf ("%d", &b);
	
	for (i=0; i<b; i++){
		total+=a;
	}
	
	printf ("Le total est de : ");
	printf ("%d", total);
	
	getch();
	return 0;
}
