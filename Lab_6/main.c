#include <stdio.h>

int length(char *s){
    int i = 0;
    while(s[i] != 0){
        i++;
    }
    return i;
}

int countNums(char str[]){
    int count = 0;
    for(int i = 0; str[i] != 0; i++){
        if(str[i] >= '0' && str[i] <= '9'){
            count++;
        }
    }
    return count;
}

int main() {
    char s[] = "asdf123";
    printf("length: %d\n", length(s));
    printf("countNums: %d\n", countNums(s));
    return 0;
}
