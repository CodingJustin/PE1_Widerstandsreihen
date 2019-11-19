/*Programm Widerstandsreihen*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

// frage den Benutzer nach gewuenschter E-Reihe
int read_e_series() {
    while(1) {
        int n;
        printf("\n\tBitte geben Sie die Nr. der E-Reihe an: ");
        scanf("%i",&n);
        while (getchar() != '\n');

        if (n==6 || n==12 || n==24 || n==48 || n==96 || n==192) return n;

        printf("\n\nUngueltige Eingabe (%i)!\n\n",n);
        printf("Gueltige Werte: 6, 12, 24, 48, 96, 192!\n\n");
    }
}

// frage den Benutzer nach gewuenschter Dekade
int read_decade() {
    int n;
    printf("\n\tBitte geben Sie den Dekadenfaktor an: ");
    scanf("%i",&n);
    while (getchar() != '\n');
    return n;
}
//Funktion zur richtigen Anwendung der Toleranz


//Funktion zur Berechnung der Widerstände der E-Reihe
double calc_e_series(double e_series, int decade) {
    double k;

    k = pow(10, 1 / e_series);
    printf("%f", k);

}

int main() {
    double e_series, decade;


    printf("\n\nProgramm zur Berechnung von Widerstandsreihen\n");
    printf("--------------------------------------------------------\n");

    // lese gewuenschte E-Reihe und Dekade
     e_series = read_e_series();
     decade = read_decade();
     calc_e_series(e_series, decade);

}