#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x;
    int y;
}
coordonnee;

int main(int argc, char *argv[]){

    int i, x[15], y[15];
    coordonnee co;

    printf("-- Affichage Coordonnee --\n");
    
    for(i=0; i<=15; i++){
        printf("Donnee l'abscisse du point : ");
        scanf("%d", co.x);
        x[i] = co.x;
        printf("Donnee l'ordonnee du point : ");
        scanf("%d", co.y);
        y[i] = co.y;
    }

    for(i=0; i<=15; i++){
        printf("(%d, %d)", x[i], y[i]);
    }

    getch();
    return 0;
}
