#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>


int main(int argc, char *argv[]) {
	
	int i, j, result, firstPrimeNumber[4]={2,3,5,7}, primeNumber[100];
	
	for(i=0; i<100; i++){
		primeNumber[i]=1;
	}
		for(i=0; i<4; i++){
			j=2;
			while ((result=firstPrimeNumber[i]*j)<=100){
				primeNumber[result-1]=0;
				j++;
			}
		}
		for (i=1; i<=100; i++){
			printf("%d\t%d\n", i, primeNumber[i-1]);
		}
	
   
	
	getch();
	return 0;
}
