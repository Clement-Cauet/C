#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>
#include <tchar.h>


int main(int argc, char *argv[]) {
	
	char str[100], lettre[26];
	int i, j, maj, min, compteur;
	
	printf("Votre phrase : ");
	gets(str);
	compteur=0;
	str[i]=0;
	lettre[i]=0;
	
	while(str[compteur]!='\0'){
		compteur++;
	}
	
	printf("Ta phrase est : ");
	
	for (i = 0; str[i]; i++) { 
    	if ((str[i]>='a' && str[i]<='z')) {
      	str[i] += ('A' - 'a'); 
	  }
    }
	
	printf("%c", str);
	
	getch();
	return 0;
}
