#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>
#include <math.h>

void saisie(float *aa, float *bb, float *cc);
float *calcul(float aa, float bb, float cc);
void main(int argc, char *argv[]){
	float a, b, c;
	float *result = NULL;

	printf("-- Calcul polynome --\n");
	
	saisie(&a, &b, &c);
	result=calcul(a, b, c);

	if(result != NULL)
	{
		if(result[0] > 0)
		{
		
			printf("Il y a %.0f solutions :  %f ", result[0], result[1]);
			if(result[0] == 2)
			{
				printf (" et %f", result[2]);
			}
			
			free(result);
		}
		
	}
	else
	{
		printf("Pas de solution.");
	}
	
}

void saisie(float *aa,float *bb,float *cc) {
	
	printf("Polynome de la forme : ax^2+bx+c\n");
	printf("Entrer la valeur de a : ");
	scanf("%f", aa);
	printf("Entrer la valeur de b : ");
	scanf("%f", bb);
	printf("Entrer la valeur de c : ");
	scanf("%f", cc);
}

float *calcul(float aa,float bb,float cc)
{
	float delta = 0;
	float *result = NULL;
	
	delta = (bb*bb)-4*aa*cc;
	
	printf("Delta = %f\n", delta);
	
	if(delta > 0.0)
	{
		result = malloc(3 * sizeof(float));
		result[0] = 2;
		result[1] = (-bb-sqrt(delta))/(2*aa);
		result[2] = (-bb+sqrt(delta))/(2*aa);
	}
	else if(delta == 0.0)
	{
		result = malloc(2 * sizeof(float));
		result[0] = 1;
		result[1] = -bb/(2*aa);
	}
	
	return result;
}
