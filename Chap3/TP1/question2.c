#include <stdio.h>

void affiche();
void main(int argc, char *argv[]){

	affiche();
	
	getch();
	return 0;
}

void affiche(){
	int tab[10]={1,2,4,8,16,32,64,128,256,512};
	int i;
	
	for(i=0; i<10; i++){
		printf("\n%d\t%d", tab[i], i);
	}
	
}
