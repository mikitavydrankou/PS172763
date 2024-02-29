#include <stdio.h>
#include <math.h>
int main() {

//  Instrukcje warunkowe, operator warunkowy

    //zad1
//    int a;
//    scanf("%d", &a);
//    if(a>0){
//        printf("Liczba dodatnia");
//    } else if(a == 0) {
//        printf("Liczba zero\n");
//    } else{
//        printf("Liczba ujemna");
//    }

    //zad2
//    int a;
//    int b;
//    scanf("%d %d", &a, &b);
//    if(a>b){
//        printf("a>b");
//    } else{
//        printf("a<b");
//    }

    //zad3
//    int a;
//    scanf("%d", &a);
//    switch (a) {
//        case 1:
//            printf("niedostateczny");
//            break;
//        case 2:
//            printf("dopuszczający");
//            break;
//        case 3:
//            printf("dostateczny");
//            break;
//        case 4:
//            printf("dobry");
//            break;
//        case 5:
//            printf("bardzo dobry");
//            break;
//        default:
//            printf("błąd(poza zakresem)");
//            break;
//    }

    //zad4
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    printf("najmniejsza: %d", (a<b&&a<c?a:(b<a&&b<c)?b:a));

    //zad5
//    int a;
//    scanf("%d", &a);
//    ((a % 4 == 0 || a % 400 == 0) && a % 100 != 0) ? printf("rok jest przestępnym") : printf("rok nie jest przestępnym");

    //zad6
//    int a, b;
//    scanf("%d %d", &a, &b);
//    (a+b)%2==0 ? printf("suma jest parzystą") : printf("suma jest nieparzystą");

    //zad7
//    int a, b, c;
//    printf("wprowadz a, b, c: ");
//    scanf("%d %d %d", &a, &b, &c);
//    double delta = b*b - 4*a*c;
//
//    if(delta != 0 && delta > 0) {
//        printf("x1 = %lf\n", (-b - sqrt(delta)) / (2 * a));
//        printf("x2 = %lf\n", (-b + sqrt(delta)) / (2 * a));
//    } else if(delta ==0){
//        printf("x = %lf\n", (-b - sqrt(delta)) / (2 * a));
//    } else{
//        printf("delta < 0\n");
//    }

    //zad9
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    printf("najmniejsza: %d", (a<b&&a<c?a:(b<a&&b<c)?b:a));

    //zad11
//    double a, b;
//    scanf("%lf %lf", &a, &b);
//    a>b ? printf("więjksza: %.2lf", a) : printf("więjksza: %.2lf", b);

    //zad13
//    int a;
//    scanf("%d", &a);
//    ((a % 4 == 0 || a % 400 == 0) && a % 100 != 0) ? printf("Rok przestępny") : printf("Rok nieprzestępny");


// Pętle

    //zad1
//    for(int i = 0; i <= 100; i++){
//        printf("%d\n", i);
//    }

    //zad2
//    int n;
//    scanf("%d", &n);
//    int suma = 0;
//    int i=1;
//    while (i <= n){
//        suma+=i;
//        i++;
//    }
//    printf("%d", suma);

    //zad3
//    int n;
//    int sum = 0;
//    do{
//        scanf("%d", &n);
//        sum+=n;
//    } while(n != 0);
//    printf("%d", sum);

    //zad4
//    int n;
//    scanf("%d", &n);
//    int silnia = 1;
//    if(n>0){
//        for(int i = 1; i <= n; i++){
//            silnia*=i;
//        }
//    }
//    printf("%d", silnia);

    //zad5
    int n = 10;
    int first = 0, second = 1, next, i = 0;

    while (i < n){
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d\n", next);
        i++;
    }

    return 0;
}





#include <stdio.h>

//int main() {
//    int n = 10;
//    int first = 0, second = 1, next, i = 0;
//
//    printf("The first %d Fibonacci numbers are: \n", n);
//
//    while (i < n) {
//        if (i <= 1)
//            next = i;
//        else {
//            next = first + second;
//            first = second;
//            second = next;
//        }
//        printf("%d\n", next);
//        i++;
//    }
//
//    return 0;
//}