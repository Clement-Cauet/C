#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(int argc, char *argv[]) {

int N,n, somme;

printf("Definir N : ");
scanf("%d", &N);
for(n=0; n<N; n++)
{
	somme = somme + n;
}

printf ("La somme des entiers de 1 a %d est de : ", n);
printf("%d", somme);

getch();

return 0;
}
