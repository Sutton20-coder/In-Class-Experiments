#include<stdio.h>


void print_course(void){
        
    printf("You are in COP2271!\n");
    }



void print_course_w_number(int course_number){
    if (course_number == 2271){
        printf("You are in the best %d course\n", course_number);
    }
    else {
        printf("You are in the %d course\n", course_number);
    }
}


int main (void){

    // To use a function, you need to call it.

    // You cannot create a function inside another function.

    // Create a function that doesn't return a value and doesn't take any value.

    print_course();
    int number = 2271;

    print_course_w_number(number);


    return 0;
}