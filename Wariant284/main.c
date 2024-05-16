#include <stdio.h>
#include <stdlib.h>

int func777 (int n, int m, int **tab){
    int temp = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
                if (tab[i][j] % 2 != 0){
                    temp *= tab[i][j];
            }
        }
    }
    return temp;
}

int main(void) {
    int n, m;
    printf("n: ");
    scanf("%d", &n);
    printf("m: ");
    scanf("%d", &m);

    int **tab = (int **)malloc(n * sizeof(int *));

    for (int i = 0; i < n; i++) {
        tab[i] = (int *)malloc(m * sizeof(int));
    }

    printf("elementy:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &tab[i][j]);
        }
    }
    int result = func777(n, m, tab);
    printf("wynik: %d\n", result);
    free(tab);
    return 0;
}
