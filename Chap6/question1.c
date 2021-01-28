#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char pseudo[20];
    char classe[20];
    int lvl;
    float defPhysique;
    float defMagique;
} 
fiche ;

int main(int argc, char *argv[]){

	fiche f1;

    printf("-- Affichage Structure --\n");
    
    printf("Vous vous appelez : ");
    scanf("%s", f1.pseudo);
    printf("Vous etes un(e) : ");
    scanf("%s", f1.classe);
    printf("Votre niveau : ");
    scanf("%d", &f1.lvl);
    printf("Vous avez une Defense Physique de : ");
    scanf("%f", &f1.defPhysique);
    printf("Vous avez une Defense Magique de : ");
    scanf("%f", &f1.defMagique);
    printf("%s, vous etes un(e) %s de niveau %d avec %f de Defense Physique et %f de Defense Magique", f1.pseudo, f1.classe, f1.lvl, f1.defPhysique, f1.defMagique);

    getch();
    return 0;
}
