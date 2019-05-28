#include <stdio.h>
#include <stdlib.h>
#include "jeu.h"
#include "menus.h"
#include <math.h>

int main()
{
    /* Appeler menu difficulté
    /* Appeler le jeu
    /* Appeller le menu recommencer
    */
    int continuer = 1;
    int compteurPartie = 0;

    while(continuer == 1){
        jeu(&continuer);
        compteurPartie++;
    }
    /* Fin du jeu */
    printf("Merci beaucoup, a bientot\nTu as fait %d parties ...\n", compteurPartie);
    return 0;
}
