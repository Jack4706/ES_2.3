#include <stdio.h>

int main() {

    int sec1, sec2, min1, min2, ora1, ora2, differenza;

    printf("inserisci i secondi del primo orario:\n");
    scanf("%d", &sec1);

    printf("inserisci i minuti del primo orario:\n");
    scanf("%d", &min1);

    printf("inserisci l'ora del primo orario:\n");
    scanf("%d", &ora1);

    printf("inserisci i secondi del secondo orario:\n");
    scanf("%d", &sec2);

    printf("inserisci i minuti del secondo orario:\n");
    scanf("%d", &min2);

    printf("inserisci l'ora del secondo orario:\n");
    scanf("%d", &ora2);

    sec1 += min1*60 + ora1*3600;
    sec2 += min2*60 + ora2*3600;

    if (sec1 >= sec2)
        differenza = sec1 - sec2;
    else
        differenza = sec2 - sec1;

    printf("la differenza in secondi e': %d",differenza);

    return 0;
}