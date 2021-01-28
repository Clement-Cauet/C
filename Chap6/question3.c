#include <stdio.h>
#include <stdlib.h>

struct coordonnee{
    int x;
    int y;
}

function saisir(int x[15], int y[15]){

    int i;

    for(i=0; i<=15; i++){
        printf("Donnee l'abscisse du point : ");
        scanf("%d", coordonnee.x);
        x[i] = coordonnee.x;
        printf("Donnee l'ordonnee du point : ");
        scanf("%d", coordonnee.y);
        y[i] = coordonnee.y;
    }
}

function afficher(int x[15], int y[15]){
    for(i=0; i<=15; i++){
        printf("(%d, %d)", x[i], y[i]);
    }
}

int main(int argc, char *argv[]){

    int x[15]; y[15];
    coordonnee;

    printf("-- Affichage Coordonnee --\n");
    
    saisir(x[15], y[15]);
    afficher(x[15], y[15]);    

    getch();
    return 0;
}
