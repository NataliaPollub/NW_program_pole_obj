#include <stdio.h>
#include "objetosc.h"
#include "pole.h"


int main()
{
    printf("====......PROGRAM DO OBLICZANIA......====\n");
    printf("====.........POLA PROSTOKATA.........====\n");
    printf("====..I OBJETOSCI PROSTOPADLOSCIANU..====\n\n");
    float side1, side2, height;
    printf("Podaj bok nr 1: "); scanf("%f", &side1);
    printf("Podaj bok nr 2: "); scanf("%f", &side2);
    printf("Podaj wysokosc prostopadloscianu: "); scanf("%f", &height);

    pole(side1, side2);
    objetosc(side1, side2, height);




    return 0;
}
