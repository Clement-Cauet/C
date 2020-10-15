#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>
#include <tchar.h>


int main(int argc, char *argv[]) {
	
	char str[100], tmp;
	int i, j, compteur;
	
	printf("Votre mot : ");
	gets(str);
	compteur=0;
	while(str[compteur]!='\0'){
		compteur++;
	}
	
	for (i=strlen(str)-1, j=0; i>j; j++, i--){
		tmp=str[j];
		str[j]=str[i];
		str[i]=tmp;
	}
		
	printf("%s", str);
	
getch ();
return 0;	
}
