#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "menus.h"

void jeu(int *pointeurContinuer)
{
    srand(time(NULL));


    int min = 1;
    int max = 100;
    int nombreMystere = 0;
    int nombreChoisi = 0;
    int compteur = 0;


    /* Menu de difficulte */

    menuDifficulte(&max);

    printf("Je devine mon nombre de %d a %d\n", min, max);


    nombreMystere = (rand() % (max - min + 1)) + min;

    /* Boucle de jeu */
    do {

        printf("Devinez: ");
        scanf("%d", &nombreChoisi);

        if(nombreChoisi < min || nombreChoisi > max && nombreChoisi != 55555) {printf("N'importe quoi, recommence\n");}
        else if(nombreChoisi == 55555) {nombreChoisi = nombreMystere;} // Cheat code
        else if(nombreChoisi < nombreMystere) {printf("Plus\n");
                                                compteur++;
        }
        else if(nombreChoisi > nombreMystere) {printf("Moins\n");
                                                compteur++;
        }

    } while(nombreChoisi != nombreMystere);
    compteur++;

        /* Victoire */
        printf("Bravo, tu as devine le nombre en %d coups\n", compteur);
        *pointeurContinuer = menuRecommencer();
     // supra boucle

}

