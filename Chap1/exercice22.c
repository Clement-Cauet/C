#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(int argc, char *argv[]) {
	
	int a, b, c;
	
	printf ("Veuillez saisir a : ");
	scanf ("%d", &a);
	printf ("Veuillez saisir b : ");
	scanf ("%d", &b);
	printf ("Veuillez saisir c : ");
	scanf ("%d", &c);
	
	if (a>b && b>c){
		printf ("%d", c);
		printf ("%d", b);
		printf ("%d", a);	
	}
	
	if (a>c && c>b){
		printf ("%d", b);
		printf ("%d", c);
		printf ("%d", a);	
	}
	
	if (b>a && a>c){
		printf ("%d", c);
		printf ("%d", a);
		printf ("%d", b);	
	}
	
	if (b>c && c>a){
		printf ("%d", a);
		printf ("%d", c);
		printf ("%d", b);	
	}
	
	if (c>a && a>b){
		printf ("%d", b);
		printf ("%d", a);
		printf ("%d", c);	
	}
	
	if (c>b && b>a){
		printf ("%d", a);
		printf ("%d", b);
		printf ("%d", c);	
	}
	
	getch();
	return 0;
}
