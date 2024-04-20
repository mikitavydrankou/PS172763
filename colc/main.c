#include <stdio.h>

//zad1

int iloczyn(int n, int m){
    int wynik = 1;
    for(int i = n; i <= m; i++){
        if(i%2==1)
        wynik*=i;
    }
    return wynik;
}

//zad2

double find_max_pointed_numbers(const double * num1, double * const num2){
    return (*num1>*num2)?*num1:*num2;
}

int sequence_value_d(int n) {
    if(n==0){
        return 3;
    }
    if(n%2==0){
        return sequence_value_d(n-1)-3;
    }
    if(n%2==1){
        return 2 * sequence_value_d(n-1)+4;
    }
}



int main() {
    int n;
    printf("Podaj indeks n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Podano niepoprawny indeks.\n");
        return 1;
    }

    printf("Wartość elementu o indeksie %d ciągu: %d\n", n, sequence_value_d(n));
    return 0;
}
