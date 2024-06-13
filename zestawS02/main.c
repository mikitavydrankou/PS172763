#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//void napisDoNapisa(char * napis1, char * napis2){
//    int j = 0;
//    for(int i = 1; i < strlen(napis1); i += 2){
//        napis2[j++] = napis1[i];
//    }
//    napis2[j] = '\0';
//    printf("%s\n", napis1);
//    printf("%s\n", napis2);
//}

//struct Telefon{
//    char marka[15];
//    int liczbaPolaczen;
//};
//
//struct Telefon * initTelefon(char * marka, int liczbaPolaczen){
//    if(strlen(marka) < 3 && liczbaPolaczen < 50){
//        return NULL;
//    }
//    struct Telefon * phone = malloc(sizeof(struct Telefon));
//    strncpy(phone->marka, marka, sizeof(phone->marka)-1);
//    phone -> marka[sizeof(phone->marka)-1] = '\0';
//    phone -> liczbaPolaczen = liczbaPolaczen;
//    return phone;
//}
//
//void zwieksz(struct Telefon * telefon){
//    telefon -> liczbaPolaczen += 10;
//}

struct element {
    int i;
    struct element * next;
};

int compare(struct element * lista1, struct element * lista2){
    int count1 = 0;
    int count2 = 0;

    struct element * current1 = lista1->next;
    struct element * current2 = lista2->next;

    while(current1 != NULL){
        count1++;
        current1=current1->next;
    }

    while(current2 != NULL){
        count2++;
        current2=current2->next;
    }

    if(count1 == count2){
        return 1;
    } else {
        return 0;
    }
}

int main(void) {
//    char a[50] = "abcdef";
//    char b[50] = "";
//    napisDoNapisa(a, b);

//    struct Telefon * iphone = initTelefon("Apple", 60);
//    printf("%s, %d\n", iphone->marka, iphone->liczbaPolaczen);
//    zwieksz(iphone);
//    printf("%s, %d\n", iphone->marka, iphone->liczbaPolaczen);

    struct element * lista1 = malloc(sizeof(struct element));
    lista1 -> next = malloc(sizeof(struct element));
    lista1 -> next -> i = 1;
    lista1 -> next -> next = malloc(sizeof(struct element));
    lista1 -> next -> next -> i = 1;
    lista1 -> next -> next -> next = malloc(sizeof(struct element));
    lista1 -> next -> next -> next -> i = 1;
    lista1 -> next -> next -> next -> next = malloc(sizeof(struct element));
    lista1 -> next -> next -> next -> next -> i = 1;
    lista1 -> next -> next -> next -> next -> next = malloc(sizeof(struct element));
    lista1 -> next -> next -> next -> next -> next -> i = 1;
    lista1 -> next -> next -> next -> next -> next -> next = malloc(sizeof(struct element));
    lista1 -> next -> next -> next -> next -> next -> next -> i = 1;
    lista1 -> next -> next -> next -> next -> next -> next -> next = NULL;

    struct element * lista2 = malloc(sizeof(struct element));
    lista2 -> next = malloc(sizeof(struct element));
    lista2 -> next -> i = 1;
    lista2 -> next -> next = malloc(sizeof(struct element));
    lista2 -> next -> next -> i = 1;
    lista2 -> next -> next -> next = malloc(sizeof(struct element));
    lista2 -> next -> next -> next -> i = 1;
    lista2 -> next -> next -> next -> next = malloc(sizeof(struct element));
    lista2 -> next -> next -> next -> next -> i = 1;
    lista2 -> next -> next -> next -> next -> next = malloc(sizeof(struct element));
    lista2 -> next -> next -> next -> next -> next -> i = 1;
    lista2 -> next -> next -> next -> next -> next -> next = malloc(sizeof(struct element));
    lista2 -> next -> next -> next -> next -> next -> next -> i = 1;
    lista2 -> next -> next -> next -> next -> next -> next -> next = NULL;

    int result = compare(lista1, lista2);

    printf("%d\n", result);


    return 0;
}
