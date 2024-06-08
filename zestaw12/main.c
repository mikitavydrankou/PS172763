#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int countLower(char * a){
//    int count = 0;
//    for(int i = 0; a[i] != '\0'; i++){
//        if(a[i] >= 'a' && a[i] <= 'z'){
//            count++;
//        }
//    }
//    return count;
//}
//
//int zad2(char napis1[], char napis2[]){
//    int result = 0;
//    if(strlen(napis1) <= strlen(napis2)){
//        result = countLower(napis1);
//    } else
//    {
//        result = countLower(napis2);
//    }
//    return result;
//}

//int foo(int **tab, int n){
//    int maxElem = 0;
//    for(int i = 0; i < n; i++){
//        for(int j = 0; j < n; j++){
//            if(i+j == n-1){
//                maxElem = tab[i][j];
//            }
//        }
//    }
//    return maxElem;
//}

//struct Product{
//    int quantity;
//    float price;
//};
//
//struct Product foo(struct Product * tab, int n){
//    struct Product maxVal = tab[0];
//
//    for(int i = 0; i < n; i++){
//        if(tab[i].price > maxVal.price){
//            maxVal = tab[i];
//        }
//    }
//
//    return maxVal;
//}

struct element {
    int x;
    struct element * next;
};

void printNegative(struct element * lista){
    struct element * current = lista->next;
    while(current != NULL){
        if(current->x > 0){
            printf("%d\n", current->x);
        }
        current = current->next;
    }

}

int main(void) {
//    char nap1[] = "Helloorlda";
//    char nap2[] = "Helloorlda";
//    printf("%d", zad2(nap1, nap2));
//    int n = 4;
//    int arr[4][4] = {
//            {1, 2, 3, 4},
//            {5, 6, 7, 8},
//            {9, 10, 11, 12},
//            {17, 14, 15, 16}
//    };
//
//    int* matrix[n];
//    for(int i = 0; i < n; i++){
//            matrix[i] = arr[i];
//    }
//
//    int maxval = foo(matrix, n);
//    printf("Największy element na przekątnej pobocznej: %d\n", maxval);


//    struct Product products[3] = {{3,2}, {3,4},{2,5}};
//    struct Product max = foo(products, 3);
//    printf("%d\n", max.quantity);
//    printf("%f", max.price);

    struct element * lista = malloc(sizeof(struct element));
    lista->next = malloc(sizeof(struct element));
    lista->next->x = 1;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->x = -2;
    lista->next->next->next = malloc(sizeof(struct element));
    lista->next->next->next->x = -4;
    lista->next->next->next->next = malloc(sizeof(struct element));
    lista->next->next->next->next->x = 6;
    lista->next->next->next->next->next=NULL;

    printNegative(lista);

    return 0;
}
