#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>
#include <tchar.h>
#include<time.h> 
#define SIZE 10


int main(int argc, char *argv[]) {
	
	int i, j, tmp;
	srand(time(0));
	int tab[10] = {rand()%100, rand()%100, rand()%100, rand()%100, rand()%100, rand()%100, rand()%100, rand()%100, rand()%100, rand()%100};
	
	printf("Voici les nombres aleatoire : ");
	   		
	for (i = 0; i < 10; i++){
    	printf("%4d", tab[i]);
   }
	
	for (i=1 ; i <= 10-1; i++) {
    j = i;
 
    while (j > 0 && tab[j-1] > tab[j]) {
      tmp = tab[j];
      tab[j] = tab[j-1];
      tab[j-1] = tmp;
 
      j--;
    }
  }
 
  printf("\n******** tableau trie par ordre croissant ********\n");
 
  for (i=0; i < 10; i++){
  	printf("%4d", tab[i]);
  }
	
	
getch();
return 0;	
	
}
