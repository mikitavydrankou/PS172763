#include <stdio.h>

int count_negative_elements(int n, int arr[]){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i]<0){
            count++;
        }
    }
    return count;
}

int main() {
    int tab[5] = {-1, 2, 3, -4, -5};
    printf("%d\n", count_negative_elements(5, tab));
    return 0;
}
