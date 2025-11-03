#include <stdio.h>

#include <string.h>

#define NAME_SIZE 30

struct student{
    // Data members
    char first_name[NAME_SIZE];
    int age;
};

typedef struct student Student;

void printStudent(struct student *st);

void printStudentInfo(struct student st);

Student createStudent(void);

void printStudentInfoPointer(struct student *st);

typedef struct {
    char street;
    char city;
    int zip;
} Address;


int main(void){
    Student st1 = createStudent();
    printStudentInfoPointer(&st1);
   
    Address adr = {.street = 123_Main, "Lakeland", 33804};
    printAddress(&adr);


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




Student createStudent(void){
    Student st; 
    printf("Enter student's name: ");
    scanf("%s", st.first_name);
    printf("Enter student's age: ");
    scanf("%d", &st.age);

    return st;
}

/*

void printAddress(Address *adr){
    printf(%s, %s, %d\n, adr->street, adr->city, adr->zip);
}
*/



Address createAddress(void){
    Address adr;
    printf("Enter street: ");
    scanf("%s", adr.street);
    printf("Enter city: ");
    scanf("%s", adr.city);
    printf("Enter zip code: ");
    scanf("%d", adr.zip);

    return adr;
}