#include <stdio.h>

int func (int a, int b){
    if((a%10)%2==0 && (b%10)%2==0){
        return 1;
    }
    return 0;
}

int main() {
    printf("%d\n", func(4212141, 1231244));
    printf("%d\n", func(52344, 24148));
    printf("%d\n", func(65748, 321314));
    return 0;
}
