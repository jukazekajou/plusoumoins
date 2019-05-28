#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int menuDifficulte()
{
    int niveau = 1;

    printf("Veuillez choisir la difficulte\n");
    printf("1: De 1 à 100\n2: De 1 à 1000\n3: De 1 à 10000\n");

    do{
    printf("Indiquez votre choix: ");
    scanf("%d", &niveau);

    switch(niveau){
case 1:
    printf("Difficulte 1\n");
    niveau = 1;
    return niveau;
    break;
case 2:
    printf("Difficulte 2\n");
    niveau = 2;
    return niveau;
    break;
case 3:
    printf("Difficulte 3\n");
    niveau = 3;
    return niveau;
    break;
default:
    printf("Je n'ai pas compris\nRecommence ");
    break;
    }}
while(niveau != 1, niveau != 2, niveau != 3);
}

int menuDifficulteSwitch(choixDifficulte)
{







}
