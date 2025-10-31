#include <stdio.h>

#include <string.h>

#define NAME_SIZE 30

struct student{
    // Data members
    char first_name[NAME_SIZE];
    int age;
};

void printStudentInfo(struct student st);

void printStudentInfoPointer(struct student *st);

int main(void){

    int a; // Creates an object of type int called a.
    struct student stud; // Creates an object of struct student.


    // Access and initialize the data members of the structure.

    stud.age = 18;

    strcpy (stud.first_name, "John");


    printf("First name: %s\n", stud.first_name);
    printf("Age: %d\n", stud.age);


    // Change the age.

    stud.age = 21;
    // Print info with a function.
    printStudentInfo(stud);


    // Create a pointer to int.

    int b = 1;
    int *b_ptr = &b;
    *b_ptr = 2;

    struct student *stud_ptr = &stud;


    printStudentInfoPointer(&stud);



    struct student freshman = {.first_name = "Alice", .age = 20};

    struct student *freshman_ptr = &freshman;

    printf("First name: %s\n", freshman_ptr->first_name); // This and printStudentInfoPointer(&freshman) have the same output).
    printf("Age: %d\n", freshman_ptr-> age);

    printStudentInfoPointer(&freshman);


    return 0;
}



void printStudentInfo(struct student st){
    puts("----------------");
    printf("First name: %s\n", st.first_name);
    printf("Age: %d\n", st.age);
    puts("----------------");
}

void printStudentInfoPointer(struct student *st){
    puts("----------------");
    printf("First name: %s\n", (*st).first_name);
    printf("Age: %d\n", (*st).age);
    puts("----------------");
}