#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//int wielomian(int n, int * tab, int x){
//    int sum = 0;
//    for(int i = 0; i < n; i++){
//        sum += (tab[i] * pow(x, i));
//    }
//    return sum;
//}

//int productDiagonal(int n, int m, int tab[][m]){
//    int temp = 1;
//    for(int i = 0; i < n; i++){
//            temp *= tab[i][i];
//    }
//    return temp;
//}

struct Node {
    int x;
    struct Node * next;
};

int* foo(struct Node * lista){
    struct Node * current = lista -> next;
    int count = 0;

    while(current != NULL){
        count++;
        current = current->next;
    }

    int * tab = malloc(count * sizeof(int));

    current = lista -> next;
    int index = 0;

    while(current != NULL){
        tab[index] = current->x;
        index++;
        current=current->next;
    }
    return tab;
}

int main(void) {
//    int n = 4;
//    int tab[4] = {1,3,-4,5};
//    int x = 2;
//    int result = wielomian(n, tab, x);
//    printf("%d", result);

//    int n = 2;
//    int m = 3;
//    int tab[2][3] = {
//            {3,4,-8},
//            {-3,-7,5}
//    };
//
//    int result = productDiagonal(n,m,tab);
//    printf("%d\n", result);

    struct Node * lista = malloc(sizeof(struct Node));
    lista->next = malloc(sizeof(struct Node));
    lista->next->x = 0;
    lista->next->next = malloc(sizeof(struct Node));
    lista->next->next->x = -3;
    lista->next->next->next = malloc(sizeof(struct Node));
    lista->next->next->next->x = -4;
    lista->next->next->next->next = malloc(sizeof(struct Node));
    lista->next->next->next->next->x = -4;
    lista->next->next->next->next->next = malloc(sizeof(struct Node));
    lista->next->next->next->next->next->x = -4;
    lista->next->next->next->next->next->next = NULL;

    int * tab = foo(lista);

    for(int i = 0; i < 5; i++){
        printf("%d", tab[i]);
    }

    return 0;
}
