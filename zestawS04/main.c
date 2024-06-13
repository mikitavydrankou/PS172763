#include <stdio.h>
#include <string.h>

//int isPositive(int a){
//    return a > 0 ? 1 : 0;
//}
//
//int positive_count (int * tab, int n, int (*isPositive)(int)){
//    int count = 0;
//    for(int i = 0; i < n; i++){
//        if(isPositive(tab[i]) == 1){
//            count++;
//        }
//    }
//    return count;
//}

struct Kziazka{
    char * napis;
    int izbn;
};

int find(struct Kziazka * tab, int n){

    int number = 0;
    for(int i = 0; i < n; i++){
        if(strlen(tab[i].napis) > strlen(tab[number].napis)){
            number = i;
        }
    }
    return number + 1;
}

int main(void) {
//    int tab[5] = {1,2,-3, -3,-4};
//    int n = 5;
//    int result = positive_count(tab, n, isPositive);
//    printf("%d", result);

    struct Kziazka tab[3] = {
            {"BlaBlaa11", 12},
            {"AlbAlba", 15},
            {"Baaaa", 11}
    };

    int n = 3;
    int numer = find(tab, n);
    printf("%d", numer);
    return 0;
}

