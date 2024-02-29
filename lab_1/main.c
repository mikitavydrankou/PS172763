#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    //zad1
//    int liczba;
//    scanf("%d", &liczba);
//    printf("%d", liczba);

    //zad2
//    float liczba1;
//    float liczba2;
//    scanf("%f", &liczba1);
//    scanf("%f", &liczba2);
//    printf("różnica: %f\n", liczba1-liczba2);

    //zad3
//    int rok;
//    printf("podaj rok urodzenia: ");
//    scanf("%d", &rok);
//    printf("%d\n", rok-1);

    //zad4
//    float l1, l2, l3;
//    float srednia;
//    printf("Podaj liczby: ");
//    scanf("%f %f %f", &l1, &l2, &l3);
//    srednia = (l1 + l2 + l3)/3;
//    printf("srednia: %f", srednia);

    //zad5
//    char a, b;
//    printf("Podaj litery: ");
//    scanf("%c %c", &a, &b);
//    printf("%c %c", b, a);

    //zad6
//    float a;
//    scanf("%f", &a);
//    printf("%f", a*2);

    //zad7
//    float bukcs;
//    scanf("%f", &bukcs);
//    printf("USD -> EUR: %f", bukcs*0.85);

    //zad8
//    printf("To jest cytat: \"Często używam języka C.\"");

    //zad9
//    printf("C:\\Program Files\\MojaAplikacja\\");

    //zad10
//    printf("Specjalne znaki: \\t (tabulacja), \\n (nowa linia), %% (procent), \\\\ (ukośnik wsteczny)..");

    //zad11
//    float a;
//    float b;
//    scanf("%f %f", &a, &b);
//    float side3 = a*a + b*b;
//    printf("%f",  sqrt(side3));

    //zad12
//    int a;
//    scanf("%d", &a);
//    int liczba = abs(a);
//    printf("%d", liczba);

    //zad13
//    float a;
//    scanf("%f", &a);
//    float liczba = abs(a);
//    printf("%f", liczba);

    //zad14
    float a = 1.0;
    float b = 1e20;
    float c = -1e20;
    float result1 = (a + b) + c;
    float result2 = a + (b + c);
    printf("(a + b) + c = %f\n", result1);
    printf("a + (b + c) = %f\n", result2);
    return 0;
}
