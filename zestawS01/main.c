#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>



//int napisDigit(char * napis){
//    int length = strlen(napis);
//    int result = 0;
//    for(int i = 0; i < strlen(napis); i++){
//        if(napis[i] >= '0' && napis[i] <= '9'){
//            int cyfra = napis[i]-'0';
//            if(cyfra % 2 == 0){
//                result++;
//            }
//        }
//    }
//    if(result != 0){
//        return length * result;
//    } else {
//        return length;
//    }
//}


//int suma(int ** tab, int n){
//    int tempLowest = tab[0][0];
//    int suma = 0;
//    for(int i = 0; i < n; i++){
//        for(int j = 0; j < n; j++){
//            if(tempLowest > tab[i][j]){
//                tempLowest = tab[i][j];
//                suma = i + j;
//            }
//        }
//    }
//    return suma;
//}

struct node {
    int i;
    struct node * next;
};

//Funkcja ma wyświetlić na konsoli w kolejnych wierszach wartości elementów na liście
// będących kwadratami liczb całkowitych. Stwórz przypadek testowy.
//Przykład. Jeśli lista składa się z elementów 4,5,6,-34,0,25,11,
// to ma być wyświetlone w kolejnych wierszach: 4,0,25.

void printLista(struct node * lista){
    struct node * current = lista;

    while(current != NULL){
        int squared = (int)sqrt(current->i);
        if(squared*squared == current -> i){
            printf("%d\n", current->i);
        }
        current=current->next;
    }
    printf("---");
}

int main(void) {
//    char * napis = "a222";
//    int result = napisDigit(napis);
//    printf("%d\n", result);

//    int n = 3;
//    int tablica[3][3] = {
//            {2,2,3},
//            {2,1,2},
//            {21,2,1}
//    };
//    int * tab[3];
//    for(int i = 0; i < 3; i++){
//        tab[i] = tablica[i];
//    }
//    int result = suma(tab, n);
//    printf("%d", result);

    struct node * lista = malloc(sizeof(struct node));
    lista -> i = 4;
    lista -> next = malloc(sizeof(struct node));
    lista -> next -> i = 5;
    lista -> next -> next = malloc(sizeof(struct node));
    lista -> next -> next -> i = 6;
    lista -> next -> next -> next = malloc(sizeof(struct node));
    lista -> next -> next -> next -> i = -34;
    lista -> next -> next -> next -> next = malloc(sizeof(struct node));
    lista -> next -> next -> next -> next -> i = 0;
    lista -> next -> next -> next -> next -> next = malloc(sizeof(struct node));
    lista -> next -> next -> next -> next -> next -> i = 25;
    lista -> next -> next -> next -> next -> next -> next = NULL;

    printLista(lista);

    return 0;
}
