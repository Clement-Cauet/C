#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>


int main(int argc, char *argv[]) {

int i, min, max;    
    int tab[10];
    
	for (i=0; i<10; i++)
	
	{
	printf("Entrez une nouvelle valeur : ");
	scanf("%d", &tab[i]);
	}

    min=INT_MAX;
    max=INT_MIN;
    
    for (i=0; i<10; i++)
     {
      if(tab[i]>max) max=tab[i];
      if(tab[i]<min) min=tab[i];
     }
     
     printf ("La valeur minimal est %d\n", min);
     printf ("La valeur maximal est %d\n", max);
     
getch();
return 0;

}
