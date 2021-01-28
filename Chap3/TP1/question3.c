#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

void min();
void max();
void main(int argc, char *argv[]){

    min();
    max();

    getch ();
    return 0;
}

void min(){
	int i, min, max;    
    float tab[8]={1.6,-6.9,9.67,5.9,345,-23.6,78,34.6};
    
	min=INT_MAX;
	
	for (i=0; i<10; i++)
     {
      if(tab[i]<min) min=tab[i];
     }
     
     printf ("La valeur minimal est %d\n", min);
}

void max(){
	int i, min, max;    
    float tab[8]={1.6,-6.9,9.67,5.9,345,-23.6,78,34.6};
	
	max=INT_MIN;
    
    for (i=0; i<10; i++)
     {
      if(tab[i]>max) max=tab[i];
     }
    printf ("La valeur maximal est %d\n", max);
}
