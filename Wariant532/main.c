#include <stdio.h>
#include <stdlib.h>

double find_max_pointed_numbers(const double *a, double * const b){
    if(*a>*b){
        return *a;
    }
    return *b;
}

int main()
{
    double a = 29.2;
    double b = 3.6;

    printf("%f", find_max_pointed_numbers(&a, &b));
    return 0;
}
