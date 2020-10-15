#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>
#include <tchar.h>
#define SIZE 10


int main(int argc, char *argv[]) {

  int tab[40];
  int i, j, tmp;
  
  tab[i]=0;
	
	for (i=0; i<10; i++){
		if(tab[i]==-1){
			break;
		}
		else
			printf("Entrez une nouvelle valeur : ");
			scanf("%d", &tab[i]);
	}
	
    //afficher les éléments du tableau
   for (i=0; i < SIZE; ++i)
   {
      printf("%4d", tab[i]);
   }
 
  for (i=0 ; i < SIZE-1; i++)
  {
    for (j=0 ; j < SIZE-i-1; j++)
    {
      /* Pour un ordre décroissant utiliser < */
      if (tab[j] > tab[j+1]) 
      {
        tmp = tab[j];
        tab[j] = tab[j+1];
        tab[j+1] = tmp;
      }
    }
  }
  
  printf("\n tableau trie par ordre croissant : \n");
 
    //afficher les éléments du tableau triée
   for (i=0; i < SIZE; ++i)
   {
      printf("%4d", tab[i]);
   }

getch();
  return 0;
}
