#include <stdio.h>

void demo ();
void main(int argc, char *argv[]){

	int x=1, y=2;
	printf("\n avant d'appeler demo(), x=%d et y=%d", x, y);
	demo();
	printf("\n après avoir appeler demo(), x=%d et y=%d", x, y);
	
	getch();
	return 0;
}

void demo(){
	int x=88, y=99;
	printf("\n dans la fonction demo(), x=%d et y=%d", x, y);

}

