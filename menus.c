#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int menuRecommencer()
{
    int recommencer = 1;


    printf("Une autre partie?\n");
    printf("Any key: Oui\n0: Non ");
    scanf("%d", &recommencer);

    switch(recommencer){
case 1:
    return 1;
    break;
case 0:
    return 2;
    break;
default:
    return 1;
    break;
    }
}

void menuDifficulte(int *pointeurMax)
{
    int choix = 1;
    do {
    printf("Veuillez choisir la difficulte:\n");
    printf("1: 100\n2: 1000\n3: 1000");
    scanf("%d", &choix);

    switch(choix)
    {
    case 1:
        *pointeurMax = 100;
        break;
    case 2:
        *pointeurMax = 1000;
        break;
    case 3:
        *pointeurMax = 10000;
        break;
    default:
        printf("Je n'ai pas compris");
        choix = 0;
        break;
    }
    }while(choix == 0);
}

