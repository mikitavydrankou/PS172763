#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int findLast(char * a){
//    int index = 0;
//    int i = 0;
//    while(a[i] != '\0'){
//        if(a[i] >= '0' && a[i] <= '9'){
//            index = i;
//        }
//        i++;
//    }
//    return index;
//}

//int foo(int **tab, int n){
//    int temp = 1;
//    for(int i = 0; i < n; i++){
//        for(int j = 0; j < n; j++){
//            if(tab[i][j]%3==0 && tab[i][j]!=0){
//                temp*=tab[i][j];
//            }
//        }
//    }
//    if(temp==1){
//        return 1;
//    }
//    return temp;
//}

struct node {
    int a;
    struct node * next;
};

void printNegative(struct node * lista){
    struct node * current = lista->next;
    while(current != NULL){
        if(current->a>0){
            printf("%d\n", current->a);
        }
        current=current->next;
    }
    printf("---");
}

int main(void) {
//    printf("Hello, World!\n");
//    char str[] = "sdmna9201dsa";
//    printf("%d", findLast(str));

//    int n = 3;
//    int **tab = malloc(n * sizeof(int*));
//    tab[0] = malloc(n * sizeof(int));
//    tab[1] = malloc(n * sizeof(int));
//    tab[2] = malloc(n * sizeof(int));
//
//    tab[0][0]=3; tab[0][1]=-6; tab[0][2]=6;
//    tab[1][0]=1; tab[1][1]=9; tab[1][2]=-3;
//    tab[2][0]=1; tab[2][1]=1; tab[2][2]=1;
//
//    int przez3 = foo(tab,n);
//    printf("%d", przez3);

//    struct node * lista = malloc(sizeof(struct node));
//    lista->next = malloc(sizeof(struct node));
//    lista->next->a = 5;
//    lista->next->next = malloc(sizeof(struct node));
//    lista->next->next->a = -7;
//    lista->next->next->next = malloc(sizeof(struct node));
//    lista->next->next->next->a = 33;
//    lista->next->next->next->next = NULL;
//
//    printNegative(lista);

    return 0;
}
