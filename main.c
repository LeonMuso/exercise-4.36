#include <stdio.h>

int main(void) {
    int salti = 0;
    int cm;
    printf("inserisci i cm\n");
    scanf("%d", &cm);
    while (cm != 1 && cm != 0) {
        salti++;
        cm = cm * 0.8; // ogni salto tolgo il 20%
        printf("%d\n", cm);
    }
    printf("il numero di salti e' %d", salti);
}
