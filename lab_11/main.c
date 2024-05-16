#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Zad2

//struct Student{
//    char * firstName;
//    char * lastName;
//    int id;
//    float gpa;
//};

//Zad3

//struct Rectangle{
//    float width;
//    float height;
//    char * color;
//};

//Zad6

//struct Person{
//    char name[20];
//    int age;
//};
//
//int * initPerson(char * name, int age){
//    struct Person* newPerson = malloc(sizeof (struct Person));
//    strcpy(newPerson->name, name);
//    newPerson->age = age;
//    return newPerson;
//}
//
//void showPerson(struct Person* person){
//    printf("imie: %s, wiek: %d\n", person -> name, person -> age);
//}
//
//void birthday(struct Person* person){
//    person -> age++;
//}

//Zad7

//struct Car {
//    char brand[20];
//    int mileage;
//};
//
//struct Car initCar(const char brand[], int mileage){
//    struct Car car;
//    strncpy(car.brand, brand, 19);
//    car.brand[19] = '\0';
//    car.mileage = mileage;
//    return car;
//}
//
//void showCar(struct Car car){
//    printf("marka: %s\n", car.brand);
//    printf("przebieg: %d\n", car.mileage);
//}
//
//void mileageService(struct Car *carPtr){
//    carPtr->mileage += 10000;
//}

int main(void) {

    //zad2

//    struct Student student1 = {"A", "a", 1, 3.4};
//    struct Student student2 = {"B", "b", 2, 4.4};
//    struct Student student3 = {"C", "c", 3, 5.4};
//
//    struct Student students[3] = {student1, student2, student3};

//Zad3

//struct Rectangle tab1[] = {
//        {1.1, 2.2, "black"},
//        {2.2, 3.3, "green"},
//        {2.5,3.3,"red"},
//        {2.5,3.8, "blue"}
//};

//Zad6

//struct Person* person1 = initPerson("Jan", 22);
//    showPerson(person1);
//    birthday(person1);
//    showPerson(person1);

//Zad7

//struct Car c1 = initCar("Mercedes", 12321);
//    showCar(c1);
//    mileageService(&c1);
//    showCar(c1);
//
//


    return 0;
}
