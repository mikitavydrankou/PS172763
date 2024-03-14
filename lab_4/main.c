#include <stdio.h>
#include <stdlib.h>
//zad2

int sum(int a, int b) {
    return a + b;
}

int sumVals(int* a, int*b){
    return *a + *b;
}

void addPtr(int* a, int* b, int* c){
    *c = *a + *b;
}

//zad3
void copyInt(int x, int* w){
    *w = x;
}

//zad4

double findMax(double* num1, double* const num2){
    if(*num1 > *num2)
        return *num1;
    return *num2;
}

//zad5
int* initInts(){
    int* blok = (int*)malloc(3 * sizeof(int));
    if(blok != NULL){
        blok[0] = 5;
        blok[1] = -12;
        blok[2] = 33;
    } else {
        return NULL;
    }
    return &blok[1];
}

//zad6
float* initFloats(){
    float*blok = (float*)malloc(3*sizeof(float));
    if(blok != NULL){
        blok[0] = 4.5;
        blok[1] = 2.3;
        blok[2] = -4.2;
    } else {
        return NULL;
    }
    return blok;
}

//zad7

float* initFlts(){
    float* blok = (float*)malloc(4*sizeof(float));
    if(blok != NULL){
        blok[0] = 0.5;
        blok[1] = 1.5;
        blok[2] = 2.5;
        blok[3] = 3.5;
    } else {
        return NULL;
    }
    return &blok[3];
}

//zad8
void sumToPtr(const int* a, const int* b, int* c){
    *c = *a + *b;
}

//zad9
void strCopy(const int * a, int * b){
    *b = *a**a;
}

//zad10
//const int *a; oznacza wskaźnik na stałą liczbę całkowitą
//int * const a; oznacza stały wskaźnik na liczbę całkowitą
//const int * const a; oznacza stały wskaźnik na stałą liczbę całkowitą

double subPtrs(const double *a, double * const b){
    return *a - *b;
}

//zad11

int sumSqrs(const int *a, int * const b){
    return (*a**a) + (*b * *b);
}

//zad12
float linFuncVal(const  float *a, float * const b, const float * c){
    return *a**b + *c;
}


int main() {
    printf("Zad_2: \n");
    int a = 3;
    int b = 10;
    int c = 3;
    printf("a + b: %d\n", sum(a, b));
    printf("*a + *b: %d\n", sumVals(&a, &b));
    addPtr(&a, &b, &c);
    printf("c = a + b = %d\n", c);

    printf("\n");
    printf("Zad_3: \n");
    copyInt(5, &a);
    printf("w = %d\n", a);

    printf("\n");
    printf("Zad_4: \n");
    double num1 = 5.5;
    double num2 = 10.5;
    printf("Max: %f\n", findMax(&num1, &num2));

    printf("\n");
    printf("Zad_5: \n");
    int* mid = initInts();
    if(mid != NULL) {
        printf("mid: %d\n", *mid);
    } else{
        printf("error\n");
    }
    free(mid-1);

    printf("\n");
    printf("Zad_6: \n");
    int* first = initFloats();
    if(first != NULL){
        printf("first: %f\n", *first);
    } else {
        printf("error\n");
    }
    free(first);

    printf("\n");
    printf("Zad_7: \n");
    float* last = initFlts();
    if(last != NULL){
        printf("last: %f\n", *last);
    } else {
        printf("error\n");
    }
    free(last-3);

    printf("\n");
    printf("Zad_8: \n");
    int d = 5;
    int e = 10;
    int f = 0;
    sumToPtr(&d, &e, &f);
    printf("f = d + e = %d\n", f);

    printf("\n");
    printf("Zad_9: \n");
    int g = 5;
    int h = 0;
    strCopy(&g, &h);
    printf("h = g*g = %d\n", h);

    printf("\n");
    printf("Zad_10: \n");
    double num3 = 10.5;
    double num4 = 5.5;
    printf("a - b = %f\n", subPtrs(&num3, &num4));

    printf("\n");
    printf("Zad_11: \n");
    int i = 5;
    int j = 10;
    printf("a^2 + b^2 = %d\n", sumSqrs(&i, &j));

    printf("\n");
    printf("Zad_12: \n");
    float k = 5.5;
    float l = 10.5;
    float m = 2.5;
    printf("a*b + c = %f\n", linFuncVal(&k, &l, &m));


    return 0;
}
