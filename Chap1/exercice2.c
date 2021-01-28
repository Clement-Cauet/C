#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(int argc, char *argv[]) {
	int x=4,y;
	
	y=(x>5)&&(x<8);
	printf("prem evaluation : \t x= %d\n",x,y);
	x=y+x+2;
	y=(x>5)&&(x<7);
	printf("2e evaluation : \t %d\n",x,y);
	getch();
	return 0;
}
