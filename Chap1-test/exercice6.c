#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(int argc, char *argv[]) {
	 
	 float note;
	 int nbnote, notesup;
	 
	 nbnote = 0;
	 note = 0;
	 notesup = 0;
	 
	 for (note>=0 && note<=20; nbnote<10; nbnote++){
	 	printf ("Veuillez saisir une nouvelle note : ");
	 	scanf ("%f", &note);
	 	if (note<0 || note>20) {
		 	printf ("Note errone\n");
		 }
		 if (note>=10 && note<=20){
		 	notesup=notesup+1;
		 }
	}
		 
		printf ("Nombre de note superieur a 10 : ");
		printf ("%d\n", notesup);
	 
	 getch();
	 return 0;
}
