#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int napis(char nap[]){
//    int count = 0;
//    for(int i = 0; i < strlen(nap); i++){
//        if(nap[i] == 'a'){
//            count++;
//        }
//    }
//    return count;
//}

//int find_max_row(int **tab, int n) {
//    int max_row = 0;
//    int max_val = tab[0][0];
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (tab[i][j] >= max_val) {
//                max_val = tab[i][j];
//                max_row = i;
//            }
//        }
//    }
//    return max_row;
//}
//
//struct Movie {
//    char *title;
//    int duration;
//};
//
//struct Movie minDuration(struct Movie* tab, int rozmiar){
//    struct Movie min = tab[0];
//    for(int i = 0; i < rozmiar; i++){
//        if(tab[i].duration < min.duration){
//            min = tab[i];
//        }
//    }
//    return min;
//}

struct element {
    int x;
    struct element * next;
};

void printList(struct element * list){
    if(list->next == NULL){
        printf("Empty list\n---\n");
        return;
    }
    struct element * current = list->next;
    while(current != NULL){
        if(current->x > 5){
            printf("%d\n", current->x);
        }
        current = current->next;
    }
    printf("---\n");
}

int main()
{
//    char nap2[50] = "aa World";
//    int a = napis(nap2);
//    printf("%d", a);

//    int n = 3;
//    int **tab = malloc(n*sizeof(int*));
//    tab[0] = malloc(n * sizeof (int));
//    tab[1] = malloc(n * sizeof (int));
//    tab[2] = malloc(n * sizeof (int));
//
//
//    tab[0][0] = 3; tab[0][1] = -4; tab[0][2] = 5;
//    tab[1][0] = 1; tab[1][1] = 22; tab[1][2] = 33;
//    tab[2][0] = -3; tab[2][1] = 33; tab[2][2] = 22;
//
//    int max_row = find_max_row(tab, n);
//    printf("Indeks wiersza z największym elementem: %d\n", max_row);
//
//    for (int i = 0; i < n; i++) {
//        free(tab[i]);
//    }
//    free(tab);

//    struct Movie filmy[3] = {{"Ida", 5}, {"Bogowie", 12},{"Obława", 7} };
//    struct Movie minDur = minDuration(filmy, 3);
//    printf("film z najwieksza duration to: %s\n", minDur.title);
//    printf("duration: %d\n", minDur .duration);

    struct element * lista = malloc(sizeof(struct element));
    lista->x = 9;
    lista->next = malloc(sizeof(struct element));
    lista->next->x = 6;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->x = 3;
    lista->next->next->next = malloc(sizeof(struct element));
    lista->next->next->next->x = 8;
    lista->next->next->next->next=NULL;

    printList(lista);
    return 0;
}