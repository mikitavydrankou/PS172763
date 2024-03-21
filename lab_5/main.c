#include <stdio.h>
#include <stdlib.h>

//zad1

int calculate(int (*operation)(int), int number){
    return operation(number);
}

int pom(int arg){
    return arg+5;
}

//zad2

void applyFunction(int (*func)(int), int start, int end){
    for(int i = start+1; i < end; i++){
        func(i);
    }
}

void func(int arg){
    printf("%d\n", arg);
}

//zad3

int iDontKnow(int (*func1)(int), int (*func2)(int), int n){
      for (int i = 0; i <= n; i++) {
        int sign1 = (f1(i) >= 0) ? 1 : -1;
        int sign2 = (f2(i) >= 0) ? 1 : -1;
        if (sign1 != sign2) {
            return 0;
        }
    }
    return 1;
}

int f1(int x) {
    return x * x - 5;
}

int f2(int x) {
    return x - 3;
}


int main()
{   printf("Zad1: \n");
    printf("%d\n", calculate(pom,8));

    printf("\n");
    printf("Zad2: \n");
    applyFunction(func, 3, 9);

    printf("\n");
    printf("Zad3: \n");
    int result = iDontKnow(f1(0), f2(6), 5);
    printf("%d\n", result);

    return 0;
}
