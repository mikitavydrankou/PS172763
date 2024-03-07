#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int count = 0;
    for(int i = n; i < 3*n; i++){
        if(i%2==0){
            count++;
        }
    }
    printf("między %d i %d leży %d parzystych liczb",n, n*3, count);
    return 0;
}
