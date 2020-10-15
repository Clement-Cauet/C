#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>


int main(int argc, char *argv[]) {
	
	float t1[10];
	float t2[10];
	int i, j;
	
	for (i=0; i<10; i++){
		printf ("Entrez une valeur : ");
		scanf ("%f", &t1[i]);
	}
		
	j=0;
	
	for(i=0; i<10; i++){
		if(t1[i]>=0){
			t2[j]=t1[i];
			j++;
		}
	}

printf("Tableau 2 : \n");
	
	for (i=j; i<10; i++){
		t2[i]=0;
	}
	for (i=0; i<10; i++){
		printf("%f \t %f\n", t1[i], t2[i]);
	}
		
	getch();
	return 0;
}
