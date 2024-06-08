#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int countCyfry(char * napis){
//    int i = 0;
//    int count = 0;
//    while(napis[i] != '\0'){
//        if(napis[i] >= '0' && napis[i] <= '9'){
//            count++;
//        }
//        i++;
//    }
//    return count;
//}
//
//int foo(char * napis1, char * napis2){
//    int result = 0;
//    if(strlen(napis1) <= strlen(napis2)){
//        result = countCyfry(napis1);
//    } else
//    {
//        result = countCyfry(napis2);
//    }
//    return result;
//}

//void foo(int ** tab, int n, int m){
//    for(int i = 0; i < n; i+=2){
//        for(int j = 0; j < m/2; j++){
//            int temp = tab[i][j];
//            tab[i][j] = tab[i][m-1-j];
//            tab[i][m-1-j] = temp;
//        }
//    }
//}
//
//void printArray(int ** tab, int n, int m){
//    for(int i = 0; i < n; i++){
//        for(int j = 0; j < m; j++){
//            printf("%d", tab[i][j]);
//        }
//        printf("\n");
//    }
//}

//struct Szkola{
//    int typ;
//    int numer;
//};
//
//int foo(struct Szkola * schools, int n){
//    int temp = schools[0].numer;
//    for(int i = 0; i < n; i++){
//        if(temp <= schools[i].numer){
//            temp = schools[i].numer;
//        }
//    }
//    return temp;
//}

struct elem {
    int x;
    struct elem * next;
};

void printNegative(struct elem * list){
    struct elem * current = list->next;
    while(current != NULL){
        if(current->x < 0){
            printf("%d\n", current->x);
        }
        current=current->next;
    }
    printf("---");
}

int main(void) {
//    char napis1[] = "aboba777643";
//    char napis2[] = "aboba7712";
//    int result = foo(napis1, napis2);
//    printf("%d", result);

//    int n = 3; int m = 4;
//    int tablica[3][4] = {
//            {1,2,3,4},
//            {1,2,3,4},
//            {1,2,3,4}
//    };
//
//    int *tab[3];
//    for(int i = 0; i < 3; i++){
//        tab[i] = tablica[i];
//    }
//
//    foo(tab, n, m);
//    printArray(tab,n,m);

//struct Szkola tab[3] = {
//        {1,44},
//        {2,23},
//        {3,38}
//};
//
//int result = foo(tab, 3);
//    printf("%d", result);

    struct elem * lista = malloc(sizeof(struct elem));
    lista->next = malloc(sizeof(struct elem));
    lista->next->x = 0;
    lista->next->next = malloc(sizeof(struct elem));
    lista->next->next->x = -3;
    lista->next->next->next = malloc(sizeof(struct elem));
    lista->next->next->next->x = -4;
    lista->next->next->next->next = NULL;

    printNegative(lista);

    return 0;
}
