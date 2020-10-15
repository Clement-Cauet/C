#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>


int main(int argc, char *argv[]) {
	
	float t[3][4], m[3], sommei, sommej, somme, moyenne;
	int i, j;
	
	t[i][j]=0;
	m[i]=0;
	sommei=0;
	sommej=0;
	somme=0;
	for (i=0; i<=10; i++){
		sommei=i+sommei;
	}
	
	for (j=0; j<=10; j++){
		sommej=j+sommej;
	}
	
	somme=sommei+sommej;
	moyenne=somme/20;
	
	for (i=0; i<=10; i++){
		printf ("%d\n", i);
	}
	
	printf ("%f", moyenne);
	
	
getch ();
return 0;	
}
